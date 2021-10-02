void plusMinus(int arr_count, int* arr) {
  double pos = 0;
  double neg = 0;
  double zero = 0;
  int size = arr_count;
  

  
  for (int i = 0; i < size; ++i) {
      pos += (arr[i] > 0);
      neg += (arr[i] < 0);
      zero += (arr[i] == 0);
  }
if (size == 0) return;
printf("%0.6f\n%0.6f\n%0.6f\n",pos/size,neg/size,zero/size);
return;

}
