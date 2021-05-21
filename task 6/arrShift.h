void arrShift () {
  int size = 5;
  int n = -2;
  n = abs(n); //В смещение влево я не смог
  int arr[size] {1, 2, 3, 4, 5};
  for (int i = 0; i < n; i++) {
    int temp = arr[0];
    for (int i = 1; i < size; i++) { // смещение вправо
      arr[i - 1] = arr[i];
      }
      arr[size - 1] = temp;
  }

for (int i = 0; i < size; i++) {
    std::cout << arr [i] << " ";
  }
  std::cout << std::endl;
}
