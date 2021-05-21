#include <iostream>
#include <cstdarg>
#include "changeFunction.h" //task 1
#include "changeBitFunction.h" //task 1**
#include "aggregateFunction.h" //task 2
#include "arrComparison.h" //task 3
#include "arrShift.h" //task 4
#include "changeVarFunction.h" //task 5

int main(int argc, char const *argv[]) {
  changeFunction();
  changeBitFunction();
  aggregateFunction();
  arrComparison();
  arrShift();
  changeVarFunction(10, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0);
  return 0;
}
