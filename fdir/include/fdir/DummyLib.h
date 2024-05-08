#pragma once

class DummyLib {
public:
  explicit DummyLib(int x) : _x{x} {}

  void doStuff() const;

  int addNumbers(int a, int b) const;

private:
    int _x;
};

