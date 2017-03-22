#include <iostream>
#include <cassert>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  {
    String s1 = "October";
    String s2 = "14";
    String s3 = "1945";

    date_type test1(s1,s2,s3);
    std::cout << "Test 1 Date: " << test1 << std::endl;
    date_type test2;
    std::cout << "Test 2 Date: " << test2 << std::endl;

    test2 = test1;
    assert(test1 == test2);
    std::cout << "Test 2 New Date: " << test2 << std::endl;
  }

  {
    String s1 = "October";
    String s2 = "-";
    String s3 = "4234";

    date_type test1(s1,s2,s3);
    std::cout << "Test 1 Date: " << test1 << std::endl;
    date_type test2;
    std::cout << "Test 2 Date: " << test2 << std::endl;

    test1 = test2;
    assert(test1 == test2);
    std::cout << "Test 1 New Date: " << test1 << std::endl;
  }

  {
    String s1 = "December";
    String s2 = "31";
    String s3 = "-";

    date_type test1(s1,s2,s3);
    std::cout << "Test 1 Date: " << test1 << std::endl;
    date_type test2;
    std::cout << "Test 2 Date: " << test2 << std::endl;

    test2 = test1;
    assert(test1 == test2);
    std::cout << "Test 2 New Date: " << test2 << std::endl;
  }

  std::cout << "COMPLETED TESTING ON DATE EQUALITY" << std::endl;
}