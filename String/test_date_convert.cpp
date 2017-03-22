#include <iostream>
#include <cassert>
#include "logentry.hpp"
#include "string.hpp"

int main()
{
  //TESTING TO SEE IF WE CAN CONVERT STRINGS to ints.
  {
    date_type test;
    String testYear =  "1998";
    std::cout << "The original string: " << testYear << std::endl;
   
    int tmp = test.convert(testYear);
    assert(tmp == 1998);
    std::cout << "Year after conversion: " << tmp << std::endl;
  }

  {
    date_type test;
    String testYear =  "23841";
    std::cout << "The original string: " << testYear << std::endl;
   
    int tmp = test.convert(testYear);
    assert(tmp == 23841);
    std::cout << "Year after conversion: " << tmp << std::endl;
  }

  {
    date_type test;
    String testYear =  "72190";
    std::cout << "The original string: " << testYear << std::endl;
   
    int tmp = test.convert(testYear);
    assert(tmp == 72190);
    std::cout << "Year after conversion: " << tmp << std::endl;
  }

  {
    date_type test;
    String testYear =  "000000";
    std::cout << "The original string: " << testYear << std::endl;
   
    int tmp = test.convert(testYear);
    assert(tmp == 000000);
    std::cout << "Year after conversion: " << tmp << std::endl;
  }

  {
    date_type test;
    String testYear =  "-";
    std::cout << "The original string: " << testYear << std::endl;
    
    int tmp = test.convert(testYear);
    assert(tmp == 0);
    std::cout << "Year after conversion: " << tmp << std::endl;
  }

  {
    date_type test;
    String testYear =  ":";
    std::cout << "The original string: " << testYear << std::endl;
   
    int tmp = test.convert(testYear);
    assert(tmp == 0);
    std::cout << "Year after conversion: " << tmp << std::endl;
  }
  std::cout << "COMPLETED TESTING CONVERTING STRINGS TO INT YEARS" << std::endl;
}