#include <iostream>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  //Testing our default constructor
  {
    time_type test;
    std::cout << test << std::endl;
  }
  std::cout << "COMPLETED TESTING THE TIME DEFAULT CONSTRUCTOR" << std::endl;
}