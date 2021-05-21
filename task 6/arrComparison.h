bool arrComparison () {
  int n;
  int sum;
  int testSum;
  bool result;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
    sum += arr[i];
}
  for (int i = 0; i < n; i++) {
    if (testSum == sum - testSum) {
      result = 1;
    } else {
      testSum += arr[i];
      result = 0;
    }
  }
  for (int i = 0; i < n; i++) { //вывод массива для наглядности
    std::cout << arr[i] << " ";
}
std::cout << std::endl;
std::cout << result << std::endl;
  return 0;
}
