#include "fdir/DummyLib.h"

#include "gtest/gtest.h"

namespace {
TEST(DummyTest, addNumbersTest){
  DummyLib d{13};
  const auto result = d.addNumbers(3, 7);
  EXPECT_EQ(23, result);
}

TEST(DummyTest, doStuffTest){
  // this is completely arbitrary but it extends coverage
  DummyLib d{0};
  d.doStuff();
}

} // anonymous nampesapce