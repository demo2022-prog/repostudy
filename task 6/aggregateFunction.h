void aggregateFunction () {
  int n = 8;
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = (i * 3) + 1;
  }
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
