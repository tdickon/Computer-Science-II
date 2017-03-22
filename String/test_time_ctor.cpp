#include <iostream>
#include <cassert>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  //TESTING OUR CONSTRUCTOR ALONG WITH OUR SPECIFIC CONVERT FUNCTIONS

  //TEST GROUP 1: Testing to make sure that our conversions actually have the right values"
  {
    String tmpHour = "10";
    String tmpMin = "24";
    String tmpSec = "12";
    time_type test;
    
    int resultHour = test.convertHour(tmpHour);
    assert(resultHour == 10);
    int resultMin =  test.convertMin(tmpMin);
    assert(resultMin == 24);
    int resultSec = test.convertSec(tmpSec);
    assert(resultSec == 12);
    time_type result(tmpHour, tmpMin, tmpSec);
    std::cout << result << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  {
    String tmpHour = "-";
    String tmpMin = "!";
    String tmpSec = "^";
    time_type  test;
    
    int resultHour = test.convertHour(tmpHour);
    assert(resultHour == 0);
    int resultMin =  test.convertMin(tmpMin);
    assert(resultMin == 0);
    int resultSec = test.convertSec(tmpSec);
    assert(resultSec == 0);
    time_type result(tmpHour, tmpMin, tmpSec);
    std::cout << result << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  {
    String tmpHour = "-";
    String tmpMin = "35";
    String tmpSec = "^";
    time_type test;
    
    int resultHour = test.convertHour(tmpHour);
    assert(resultHour == 0);
    int resultMin =  test.convertMin(tmpMin);
    assert(resultMin == 35);
    int resultSec = test.convertSec(tmpSec);
    assert(resultSec == 0);
    time_type result(tmpHour, tmpMin, tmpSec);
    std::cout << result << std::endl;
  }
  std::cout << "COMPLETED TESTING THE TIME CONSTRUCTOR" << std::endl;
}