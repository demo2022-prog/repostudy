float changeVarFunction (int size, ...) {
  int arr[size];
  va_list lst;
  va_start(lst, size);
  for (int i = 0; i < size; i++) { //заполняем массив элементами
    arr[i] = va_arg (lst, int);
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
for (int i = 0; i < size; i++) {//через биты получилось короче
  arr[i] = arr[i] ^ 1; // 0000 <-> 0001;
  std::cout << arr[i] << " ";
}
  std::cout << std::endl;
  va_end (lst);
return 0;
}
