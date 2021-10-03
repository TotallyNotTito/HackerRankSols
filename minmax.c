#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(int arr_count, int* arr) {
  //get min
  //get max
  //sum min *exclude max
  //sum max *exclude min
  int64_t min, max, minsum, maxsum;
  min = max = minsum = maxsum = 0;
  
  min = get_min(arr_count, arr);
  max = get_max(arr_count, arr);
  
  minsum = summin(arr_count, max, arr);
  maxsum = summax(arr_count, min, arr);
  
  printf("%d %d\n", minsum, maxsum);
  
  return;
}

int get_min(int arr_count, int * arr) {
  int64_t min = arr[0];
  for (int i = 1; i < arr_count; ++i) {
      if (arr[i] < min) min = arr[i];
  }
  return min;
}

int get_max(int arr_count, int * arr) {
  int64_t max = arr[0];
  for (int i = 1; i < arr_count; ++i) {
      if (arr[i] > max) max = arr[i];
  }
  return max;
}

int summin(int arr_count, int max, int * arr) {
  bool counted = false;
  int64_t sum = 0;
  for (int i = 0; i < arr_count; ++i) {
      
     if (arr[i] != max || counted == true) sum += arr[i];
     else counted = true;
  }
  return sum;
}

int summax(int arr_count, int min, int * arr) {
  bool counted = false;
  int64_t sum = 0;
  for (int i = 0; i < arr_count; ++i) {
      if (arr[i] != min || counted == true) sum += arr[i];
      else counted = true;
  }
  return sum;
}
