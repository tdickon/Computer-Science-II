// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main ()
{
  {
    //Testing default ctor
    bigint bi1;
    bigint bi2;
    bigint result;


    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "0 + 0 = " << result << std::endl;
    assert(bi1 == 0);
    assert(bi2 == 0);
    assert(result == 0);
  }

 {
    //Testing default ctor with a variable
    bigint bi1;
    bigint bi2(1);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "0 + 1 = " << result << std::endl;
    assert(bi1 == 0);
    assert(bi2 == 1);
    assert(result == 1);
  }

 {
    //Testing with two intialized zeros
    bigint bi1(0);
    bigint bi2(0);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "0 + 0 = " << result << std::endl;
    assert(bi1 == 0);
    assert(bi2 == 0);
    assert(result == 0);
  }

 {
    //Testing default ctor with a variable
    bigint bi1(0);
    bigint bi2(1);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "0 + 1 = " << result << std::endl;
    assert(bi1 == 0);
    assert(bi2 == 1);
    assert(result == 1);
  }
 {
    bigint bi1(3);
    bigint bi2(1);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "3 + 1 = " << result << std::endl;
    assert(bi1 == 3);
    assert(bi2 == 1);
    assert(result == 4);
  }

 {
    bigint bi1(7);
    bigint bi2(5);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "7 + 5 = " << result << std::endl;
    assert(bi1 == 7);
    assert(bi2 == 5);
    assert(result == 12);
  }

 {
    bigint bi1(11);
    bigint bi2(0);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "11 + 0 = " << result << std::endl;
    assert(bi1 == 11);
    assert(bi2 == 0);
    assert(result == 11);
  }

 {
    bigint bi1(13);
    bigint bi2(5);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "13 + 5 = " << result << std::endl;
    assert(bi1 == 13);
    assert(bi2 == 5);
    assert(result == 18);
  }

 {
    bigint bi1(14);
    bigint bi2(20);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "14 + 20 = " << result << std::endl;
    assert(bi1 == 14);
    assert(bi2 == 20);
    assert(result == 34);
  }

 {
    bigint bi1(97);
    bigint bi2(3);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "97 + 3 = " << result << std::endl;
    assert(bi1 == 97);
    assert(bi2 == 3);
    assert(result == 100);
  }

 {
    bigint bi1(100);
    bigint bi2(0);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "100 + 0 = " << result << std::endl;
    assert(bi1 == 100);
    assert(bi2 == 0);
    assert(result == 100);
  }

 {
    bigint bi1(101);
    bigint bi2(99);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "101 + 99 = " << result << std::endl;
    assert(bi1 == 101);
    assert(bi2 == 99);
    assert(result == 200);
  }

 {
    bigint bi1(123);
    bigint bi2(100);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "123 + 100 = " << result << std::endl;
    assert(bi1 == 123);
    assert(bi2 == 100);
    assert(result == 223);
  }

 {
    bigint bi1(100567);
    bigint bi2(20);
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "100567 + 20 = " << result << std::endl;
    assert(bi1 == 100567);
    assert(bi2 == 20);
    assert(result == 100587);
  }

 {
    bigint bi1("100567");
    bigint bi2("20");
    bigint result;

   
    result = bi1 + bi2;
    result.debug_print(std::cout);
    std::cout << std::endl;
    std::cout << "100567 + 20 = " << result << std::endl;
    assert(bi1 == 100567);
    assert(bi2 == 20);
    assert(result == 100587);
  }

 {
   bigint bi("12345678910111213141516171819202122232425262728293031323334353637383940");
   bigint bi2(1);
   bigint result;

   result = bi + bi2;

   result.debug_print(std::cout);
   std::cout << std::endl;
   std::cout << "12345678910111213141516171819202122232425262728293031323334353637383940 + 1 = " << std::endl;
   std::cout << result << std::endl;
   assert(bi == "12345678910111213141516171819202122232425262728293031323334353637383940");
   assert(bi2 == 1);
   assert(result == "12345678910111213141516171819202122232425262728293031323334353637383941");
 }

    std::cout << "Done with testing addition." << std::endl;
}