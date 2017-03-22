#include <iostream>
#include <cassert>
#include "string.hpp"
#include "logentry.hpp"

int main()
{

  {
    //Test One:
    log_entry test;
    String testByte = "16";
    std::cout << "The byte string: " << testByte << std::endl;

    int tmp = test.byteConvert(testByte);
    assert(tmp == 16);
    std::cout << "The byte converted into an int: " << tmp << std::endl;
  }

  {
    //Test Two:
    log_entry test;
    String testByte = "1617297";
    std::cout << "The byte string: " << testByte << std::endl;

    int tmp = test.byteConvert(testByte);
    assert(tmp == 1617297);
    std::cout << "The byte converted into an int: " << tmp << std::endl;
  }

   {
    //Test Three:
    log_entry test;
    String testByte = "!";
    std::cout << "The byte string: " << testByte << std::endl;

    int tmp = test.byteConvert(testByte);
    assert(tmp == 0);
    std::cout << "The byte converted into an int: " << tmp << std::endl;
  }

}