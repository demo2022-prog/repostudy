void changeBitFunction () {
  int n = 10;
  int arr[n] {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] ^ 1;
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
}
