#include <iostream>
#include <cassert>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  {
    //Test One:
    std::cout << "Test one: " << std::endl;
    String log = "131.123.46.176 - - [18/Sep/2002:12:05:25 -0400] GET /~darci/ HTTP/1.0 200 5625";
    std::cout << "Original String: " << log << std::endl;
    log_entry test(log);
    std::cout << "Log Entry:" << std::endl;
    std::cout << test;
  }
  std::cout << "================================================================" << std::endl;
  {
    //Test Two:
    std::cout << "Test Two: " << std::endl;
    String log = "131.123.47.176 - - [18/Sep/2002:12:05:26 -0400] GET /~darci/forstudents/ HTTP/1.0 200 5929";
    std::cout << "Original String: " << log << std::endl;
    log_entry test(log);
    std::cout << "Log Entry:" << std::endl;
    std::cout << test;
  }
  std::cout << "================================================================" << std::endl;
  {
    //Test Three:
    std::cout << "Test Three: (Testing null values)" << std::endl;
    String log = "131.123.47.176 - - [18/Sep/-:12:-:- -0400] GET /~darci/forstudents/ HTTP/1.0 - -";
    std::cout << "Original String: " << log << std::endl;
    log_entry test(log);
    std::cout << "Log Entry:" << std::endl;
    std::cout << test;
  }
  std::cout << "================================================================" << std::endl;
  {
    //Test Four:
    std::cout << "Test Four (Testing an invalid log file--should return nothing" << std::endl;
    String log = "131.123.47.176 - - [18/Sep/-:12:-:- -0400] GET /~darci/forstudents/ HTTP/1.0";
    std::cout << "Original String: " << log << std::endl;
    log_entry test(log);
    std::cout << "Log Entry:" << std::endl;
    std::cout << test;
  }
  std::cout << "================================================================" << std::endl;
  std::cout << "COMPLETED TESTING LOG_ENTRY.CTOR" << std::endl;
}