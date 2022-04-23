#include <gtest/gtest.h>

#include <mylib/my_class.hpp>

TEST(MyClass, simple_test)
{
  mylib::MyClass my_class;

  EXPECT_TRUE(my_class.ReturnTrue());
}