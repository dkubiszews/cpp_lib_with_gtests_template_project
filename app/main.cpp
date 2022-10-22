#include <iostream>

#include <mylib/my_class.hpp>

int main(int argc, char *argv[])
{
  mylib::MyClass my_class;
  std::cout << my_class.ReturnTrue() << std::endl;
  return 0;
}