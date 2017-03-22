#include <iostream>
#include <cassert>
#include "logentry.hpp"
#include "string.hpp"

int main()
{
  //TESTING THE DEFAULT CONSTRUCTOR;
  {
    //Test 1: Making sure the default constructor is initialized properly for the class.
    date_type test;  
    std::cout << "Testing the default constructor for date type!" << std::endl;
  }
  std::cout << "DONE TESTING THE DATE DEFAULT CONSTRUCTOR" << std::endl;
}