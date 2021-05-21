void changeFunction () { //велить массив в отдельную функцию у меня не получилось
  int n = 10;
  int arr[n] {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			arr[i] = 1;
		} else if (arr[i] == 1) {
					arr[i] = 0;
			}
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
}
