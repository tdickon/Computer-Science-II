#include <iostream>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  //TESTING TO SEE IF THE CTOR FILLS IN THE PARAMETERS THAT WE GIVE AS INPUT.
  {
    String testDay = "31";
    String testMonth = "October";
    String testYear = "1978";
    
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear << std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  {
    String testDay = "01";
    String testMonth = "November";
    String testYear = "2001";
    
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear << std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;

  //Outputting some Elder Scrolls Holidays
  {
    String testDay = "01";
    String testMonth = "Morning Star";
    String testYear = "234";
    String era = "3rd era";
    std::cout << "New Life Festival, is celebrated in every province of Tamriel!" << std::endl;
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear  << " " << era <<  std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  {
    String testDay = "02";
    String testMonth = "Morning Star";
    String testYear = "234";
    String era = "3rd era";
    std::cout << "Scour Day, is celebrated in High Rock!" << std::endl;
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear  << " " << era <<  std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  {
    String testDay = "12";
    String testMonth = "Morning Star";
    String testYear = "234";
    String era = "3rd era";
    std::cout << "Ovrank'a, is celebrated in the Alik'r Desert!" << std::endl;
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear << " " << era <<  std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
 {
    String testDay = "15";
    String testMonth = "Morning Star";
    String testYear = "234";
    String era = "3rd era";
    std::cout << "South Wind's Prayer, is celebrated in Tamriel!" << std::endl;
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear  << " " << era <<  std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
 std::cout << std::endl;
 std::cout << std::endl;
 {
    String testDay = "16";
    String testMonth = "Sun's Dawm";
    String testYear = "234";
    String era = "3rd era";
    std::cout << "Heart's Day, is celebrated in Tamriel!" << std::endl;
    std::cout << "Test Day: " << testDay << std::endl;
    std::cout << "Test Month: " << testMonth << std::endl;
    std::cout << "Test Year: " << testYear << " " << era <<  std::endl;
    std::cout << "--------------------------------------";
    date_type test(testDay, testMonth, testYear);
    std::cout << test << std::endl;
  }
 std::cout << "COMPLTETED TESTING THE DATE CONSTRUCTOR" << std::endl;
}