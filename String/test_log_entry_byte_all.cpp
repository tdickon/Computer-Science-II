#include <iostream>
#include <cassert>
#include <vector>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  
  std::vector<log_entry> result;

  //Test One:
  
  String testEntry = "131.123.46.176 - - [18/Sep/2002:12:05:25 -400] GET /~darci/ HTTP/1.0 200 100";
  log_entry test(testEntry);
  result.push_back(test);
  std::cout << test << std::endl;
  
  //Test Two:
  
  String testEntry2 = "131.123.46.176 - - [18/Sep/2002:12:05:25 -400] GET /~darci/ HTTP/1.0 200 10";
  log_entry test2(testEntry2);
  result.push_back(test2);
  std::cout << test2 << std::endl;

  
  //Test Three:
  String testEntry3 = "131.123.46.176 - - [18/Sep/2002:12:05:25 -400] GET /~darci/ HTTP/1.0 200 -";
  log_entry test3(testEntry3);
  int tmp = test3.getByte();
  
  result.push_back(test3);
  std::cout << test3 << std::endl;

  int finalOutput = byte_count(result);
  std::cout << "FinalOutput: " << finalOutput << std::endl;

  assert(finalOutput == 110);
}