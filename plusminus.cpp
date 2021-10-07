void miniMaxSum(vector<int> arr) {
  long int size, min, max, sum;
  size = arr.size();
  min = arr[0];
  max = arr[0];
  sum = 0;
  
  for (int i = 0; i < size; ++i) {
      if (arr[i] > max) max = arr[i];
      if (arr[i] < min) min = arr[i];
      sum += arr[i]; 
  }
  cout << sum - max << " " << sum - min << endl;
  return;
}
