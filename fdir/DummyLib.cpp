#include "fdir/DummyLib.h"

#include <iostream>

void DummyLib::doStuff() const {
  std::cout << "Hello World" << std::endl;
}

int DummyLib::addNumbers(int a, int b) const {
  return a + b + _x;
}
