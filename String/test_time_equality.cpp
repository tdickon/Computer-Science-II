#include <iostream>
#include <cassert>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  {
    String s1 = "12";
    String s2 = "14";
    String s3 = "36";

    time_type test1(s1,s2,s3);
    std::cout << "Test 1 Time: " << test1 << std::endl;
    time_type test2;
    std::cout << "Test 2 Time: " << test2 << std::endl;

    test2 = test1;
    assert(test1 == test2);
    std::cout << "Test 2 New Time: " << test2 << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  {
    String s1 = "06";
    String s2 = "08";
    String s3 = "46";

    time_type test1(s1,s2,s3);
    std::cout << "Test 1 Time: " << test1 << std::endl;
    time_type test2;
    std::cout << "Test 2 Time: " << test2 << std::endl;

    test2 = test1;
    assert(test1 == test2);
    std::cout << "Test 2 New Time: " << test2 << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  {
    String s1 = "12";
    String s2 = "14";
    String s3 = "36";

    time_type test1(s1,s2,s3);
    std::cout << "Test 1 Time: " << test1 << std::endl;
    time_type test2;
    std::cout << "Test 2 Time: " << test2 << std::endl;

    test2 = test1;
    assert(test1 == test2);
    std::cout << "Test 2 New Time: " << test2 << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  {
    String s1 = "12";
    String s2 = "-";
    String s3 = "-";

    time_type test1(s1,s2,s3);
    std::cout << "Test 1 Time: " << test1 << std::endl;
    time_type test2;
    std::cout << "Test 2 Time: " << test2 << std::endl;

    test2 = test1;
    assert(test1 == test2);
    std::cout << "Test 2 New Time: " << test2 << std::endl;
  }

  std::cout << "COMPLETED TESTING ON TIME EQUALITY" << std::endl;
}