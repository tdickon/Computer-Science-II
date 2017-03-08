#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  //TESTING THE DEFAULT CONSTRUCTOR.
  {
    String test;
    assert (test == '\0');
    std::cout << "Test holds a value of: " << test << std::endl;
  } 

  std::cout << "COMPLETED TESTING THE DEFAULT CONSTRUCTOR" << std::endl;
}