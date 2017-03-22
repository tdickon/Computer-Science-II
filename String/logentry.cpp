/**
 * @file logentry.hpp
 *
 * @version 1.0
 * @3/17/2016
 * @Tyler Dickon
 *
 * Implementation for log entry, time_type and date_type ADT
 *
 */

#include <iostream>
#include <vector>
#include <cassert>

#include "logentry.hpp"

///////////////////////////////////////////////////////////////////////////////////////
//=====================================================================================
//                        **********DATE_TYPE ADT**********
//       Date_type is a class that holds the values for our day, month and year.
//=====================================================================================

//=====================================================================================
//                                  CONSTRUCTORS 
//=====================================================================================
//1.)default constructor, assigns our values to be null.
date_type::date_type()
{
  String tmp;
  month = tmp;
  day = tmp;
  year = 0;

  assert(month == '\0');
  assert(day =='\0');
  assert(year == 0);
}
//-------------------------------------------------------------------------------------
//2.) If parameters are given then fill out the variables.
date_type::date_type(const String& tmpDay, const String& tmpMonth, String& tmpYear)
{  
  day = tmpDay;
  month = tmpMonth;
  year = convert(tmpYear);
}
//-------------------------------------------------------------------------------------


//=====================================================================================
//                              ++DATE_TYPE METHODS++
//         All of the methods that pertain to Date_Type can be found below
//=====================================================================================

//1.)
//=====================================================================================
//                                  CONVERSION METHOD
//                   Converts a string of the year into an int value
//=====================================================================================
int date_type::convert(String& yearString)
{
  int numYear = 0;
  //Checks to see if there is a null value and converts the value to zero.
  if ((yearString[0] - '\0') < ('0' - '\0') || (yearString[0] - '\0') > ('9' - '\0'))
    {
      return numYear;
    }

  int index = 0;
  int stringSize = yearString.length() - 1; 
  
  int tmp = 0;
  int power = 1;

  //Convert the String into an integer to be assigned to the private member year
  while(stringSize >= 0)
    {
      tmp = (yearString[index] - '0');
      
      //Figure out the overal power of tmp
      for (int powIndex = stringSize; powIndex > 0; --powIndex)
	{
	  power = (power * 10);
	  
	}
      
      tmp =  tmp * power;
      numYear += tmp;
      power = 1;
      --stringSize;
      ++index;
    }

  return numYear;
}
//-------------------------------------------------------------------------------------


//2.)*NOTE: friend function
//=====================================================================================
//                                  OUTPUT METHOD
//                   Outputs the contents of the class for the user to see
//=====================================================================================
std::ostream & operator<<(std::ostream& out, const date_type& date)
{
  out << date.month;
  if(date.day < 10)
    {
      out << " " << "0" << date.day << ", ";
    }
  else
    {
      out << " " << date.day << ", ";
    }
  out << date.year;
  return out;
}
//------------------------------------------------------------------------------------


//3.)
//=====================================================================================
//                               EQUALITY OPERATOR OVERLOAD
//                   Compares two dates to see if they are the same
//=====================================================================================
bool date_type::operator==(const date_type& rhs) const
{
  if(this->month != rhs.month)
    {
      return false;
    }

  else if(this->day != rhs.day)
    {
      return false;
    }
  
  else if(this->year != rhs.year)
    {
      return false;
    }
  
  else
    {
      return true;
    }
}
//-------------------------------------------------------------------------------------


//4.)
//=====================================================================================
//                                   EQUAL OPERATOR OVERLOAD
//                   Allows us to copty over values from the rhs to the left
//=====================================================================================
void date_type::operator=(const date_type& rhs)
{
  
  month = rhs.month;
  day = rhs.day;
  year = rhs.year;
}
//-------------------------------------------------------------------------------------


//5.)
//=====================================================================================
//                              INEQUALITY OPERATOR OVERLOAD
//                   Compares two dates to see if they are not the same
//=====================================================================================
bool date_type::operator!=(const date_type& rhs) const
{
  if(this->month == rhs.month)
    {
      return false;
    }

  else if(this->day == rhs.day)
    {
      return false;
    }
  
  else if(this->year == rhs.year)
    {
      return false;
    }
  
  else
    {
      return true;
    }
}
//-------------------------------------------------------------------------------------


//=====================================================================================
//                        ------ END OF DATE_TYPE ADT ------ 
//=====================================================================================
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
//=====================================================================================
//                        **********TIME_TYPE ADT**********
//  Time_type is a class that holds the values for the hour, minutes, and seconds.
//=====================================================================================

//=====================================================================================
//                                  CONSTRUCTORS 
//=====================================================================================
//1.)default constructor, assigns our values to be null.
time_type::time_type()
{
  hour = 00;
  minute = 00;
  second = 00;
}
//-------------------------------------------------------------------------------------

//2.)Constructor that takes a string and breaks it down into hours, mins, and seconds.
time_type::time_type(String& hours, String& mins, String& sec)
{
  hour = convertHour(hours);
  minute = convertMin(mins);
  second = convertSec(sec);
}
//-------------------------------------------------------------------------------------


//=====================================================================================
//                              ++TIME_TYPE METHODS++
//         All of the methods that pertain to Time_Type can be found below
//=====================================================================================

//1.)
//=====================================================================================
//                                  CONVERSION METHODS
//=====================================================================================
//1.)Converts a String into int hours;
int time_type::convertHour(String& stringHour)
{
  int tmpHours = 0;

  //If the first character isn't a number, return a 0 value;
  if((stringHour[0] - '\0') < ('0' - '\0') || (stringHour[0] - '\0') > ('9' - '\0'))
    {
      return 0;
    }
    
  int stringSize = stringHour.length() - 1;
  int tmp = 0;
  int index = 0;
  int power = 1;
  
  while(stringSize >= 0)
    {
      tmp = (stringHour[index] - '0');
      
      //Figure out the overal power of tmp
      for (int powIndex = stringSize; powIndex > 0; --powIndex)
	{
	  power = (power * 10);	  
	}
      
      tmp =  tmp * power;
      tmpHours += tmp;
      power = 1;
      --stringSize;
      ++index;
    } 
  return tmpHours;
  
}
//-------------------------------------------------------------------------------------

//2.)Converts a String into int minutes;
int time_type::convertMin(String& stringMin)
{
  int tmpMin = 0;

  //If the first character isn't a number, return a 0 value;
  if((stringMin[0] - '\0') < ('0' - '\0') || (stringMin[0] - '\0') > ('9' - '\0'))
    {
      return 0;
    }
    
  int stringSize = stringMin.length() - 1;
  int tmp = 0;
  int index = 0;
  int power = 1;
  
  while(stringSize >= 0)
    {
      tmp = (stringMin[index] - '0');
      
      //Figure out the overal power of tmp
      for (int powIndex = stringSize; powIndex > 0; --powIndex)
	{
	  power = (power * 10);	  
	}
      
      tmp =  tmp * power;
      tmpMin += tmp;
      power = 1;
      --stringSize;
      ++index;
    } 
  return tmpMin;
  
}
//-------------------------------------------------------------------------------------

//3.)Converts a String into int seconds;
int time_type::convertSec(String& stringSec)
{
  int tmpSec = 0;

  //If the first character isn't a number, return a 0 value;
  if((stringSec[0] - '\0') < ('0' - '\0') || (stringSec[0] - '\0') > ('9' - '\0'))
    {
      return 00;
    }
    
  int stringSize = stringSec.length() - 1;
  int tmp = 0;
  int index = 0;
  int power = 1;
  
  while(stringSize >= 0)
    {
      tmp = (stringSec[index] - '0');
      
      //Figure out the overal power of tmp
      for (int powIndex = stringSize; powIndex > 0; --powIndex)
	{
	  power = (power * 10);	  
	}
      
      tmp =  tmp * power;
      tmpSec += tmp;
      power = 1;
      --stringSize;
      ++index;
    } 
  return tmpSec;
  
}
//-------------------------------------------------------------------------------------


//2.)*NOTE: friend function
//=====================================================================================
//                                  OUTPUT METHOD
//                   Outputs the contents of the class for the user to see
//=====================================================================================
std::ostream & operator<<(std::ostream& out, const time_type& time)
{
  if(time.hour < 10)
    {
      out << "0" << time.hour << ":";
    }
  else
    {
      out << time.hour << ":";
    }

  if(time.minute < 10)
    {
      out << "0" << time.minute << ":";
    }

  else
    {
      out << time.minute << ":";
    }

  if(time.second < 10)
    {
      out << "0" << time.second;
    }

  else
    {
      out << time.second;
    }

  return out;
}
//------------------------------------------------------------------------------------


//3.)
//=====================================================================================
//                               EQUALITY OPERATOR OVERLOAD
//                   Compares two dates to see if they are the same
//=====================================================================================
bool time_type::operator==(const time_type& rhs) const
{
  if(this->hour != rhs.hour)
    {
      return false;
    }

  else if(this->minute != rhs.minute)
    {
      return false;
    }
  
  else if(this->second != rhs.second)
    {
      return false;
    }
  
  else
    {
      return true;
    }
}
//-------------------------------------------------------------------------------------


//4.)
//=====================================================================================
//                                   EQUAL OPERATOR OVERLOAD
//                   Allows us to copty over values from the rhs to the left
//=====================================================================================
void time_type::operator=(const time_type& rhs)
{
  hour  = rhs.hour;
  minute = rhs.minute;
  second = rhs.second;
}
//-------------------------------------------------------------------------------------


//5.)
//=====================================================================================
//                               INEQUALITY OPERATOR OVERLOAD
//                   Compares two dates to see if they are not the same
//=====================================================================================
bool time_type::operator!=(const time_type& rhs) const
{
  if(this->hour == rhs.hour)
    {
      return false;
    }

  else if(this->minute == rhs.minute)
    {
      return false;
    }
  
  else if(this->second == rhs.second)
    {
      return false;
    }
  
  else
    {
      return true;
    }
}
//-------------------------------------------------------------------------------------


//=====================================================================================
//                        ------ END OF TIME_TYPE ADT ------ 
//=====================================================================================
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
//=====================================================================================
//                        ********** LOG_ENTRY ADT**********
//            Log_Entry is class that creates a log of user entries.
//=====================================================================================

//=====================================================================================
//                                  CONSTRUCTORS 
//=====================================================================================
//1.)Default constructor, assigns everything to be null values.
log_entry::log_entry()
{
  String tmp;
  date_type tmpD;
  time_type tmpT;

  host = tmp;
  date = tmpD;
  time = tmpT;
  request = tmp;
  status = tmp;
  number_of_bytes = 0;
  check = false;
}

//-------------------------------------------------------------------------------------
//2.)Takes a String and breaks it up into it's specific areas.

log_entry::log_entry(const String & line) 
{
  //Splitting line up by blanks.
  String logLine = line;
  std::vector<String> vec = logLine.split(' ');
  check = true;
  //If there are not 10 elements then discard the string;
  if(vec.size() < 10)
    {
      log_entry tmp;
      check = false;
    }

  else if (check == true)
    { 
      //If there are 10 elements we can start breaking down each string in the vector;
      //1.)Look for the host
      host = vec[0];
      //-------------------------------------------------------------------------------
      //2.)Look for the date:
	{
	  String tmpLine = vec[3];
	  std::vector<String> dateFind = tmpLine.split(':');
	  String tmpDateLine = dateFind[0];
	  
	  std::vector<String> trueDate = tmpDateLine.split('[');
	  String tmpDate = trueDate[1];
	  
	 
	  std::vector<String> resultDate = tmpDate.split('/');
	  date_type dateResult(resultDate[0],resultDate[1],resultDate[2]);
	  date = dateResult;
	}
      //-------------------------------------------------------------------------------
      //3.)Find Time
	{
	  String tmpLine = vec[3]; //we are staying in the 3rd vector because it holds time and date.
	  std::vector<String> timeFind = tmpLine.split(':');
	  
	  time_type timeResult(timeFind[1], timeFind[2], timeFind[3]);
	  time = timeResult;
	}
      //-------------------------------------------------------------------------------
      //4.)find request
	{
	  //Combine a couple different vectors to get the total request.
	  request = ((vec[5] + ' ') + vec[6] + ' ' +  vec[7]);
	}
      //-------------------------------------------------------------------------------
      //5.)find status
	{
	  status = vec[8];
	}
      //-------------------------------------------------------------------------------
      //5.)find total number of bytes.
	{
	  number_of_bytes = byteConvert(vec[9]);
	}
    }
}
//-------------------------------------------------------------------------------------


//=====================================================================================
//                              ++LOG_ENTRY METHODS++
//         All of the methods that pertain to Log_Entry can be found below
//=====================================================================================

//1.)
//=====================================================================================
//                                  CONVERSION METHODS
//=====================================================================================
int log_entry::byteConvert( String& byte)
{
  int tmpByte = 0;

  //If the first character isn't a number, return a 0 value;
  if((byte[0] - '\0') < ('0' - '\0') || (byte[0] - '\0') > ('9' - '\0'))
    {
      return 0;
    }
    
  int stringSize = byte.length() - 1;
  int tmp = 0;
  int index = 0;
  int power = 1;
  
  while(stringSize >= 0)
    {
      tmp = (byte[index] - '0');
      
      //Figure out the overal power of tmp
      for (int powIndex = stringSize; powIndex > 0; --powIndex)
	{
	  power = (power * 10);	  
	}
      
      tmp =  tmp * power;
      tmpByte += tmp;
      power = 1;
      --stringSize;
      ++index;
    } 
  return tmpByte;
}
//------------------------------------------------------------------------------------


//2.)*NOTE:Friend Function
//=====================================================================================
//                                  OUTPUT FUNCTION
//=====================================================================================
std::ostream & operator<<(std::ostream& out, const log_entry& logFile)
{
    {
      out << logFile.host << " "  << logFile.date <<  " " << logFile.time <<  " " << logFile.request
	  << " "  << logFile.status << " ";
      if(logFile.number_of_bytes == 0)
	{
	  out << "-" << std::endl;
	}

      else
	{
	  out <<  logFile.number_of_bytes << std::endl;
	}
      
      return out;
    }
}
//-------------------------------------------------------------------------------------


//2.)*NOTE:Friend Function
//=====================================================================================
//                                 HOST OUTPUT FUNCTION
//=====================================================================================
void log_entry::hostOutput() const
{
  if(check == true)
    {
      std::cout << this->host << std::endl;
    }
  else
    {
      return;
    }
}
//-------------------------------------------------------------------------------------


//4.)
//=====================================================================================
//                               EQUALITY OPERATOR OVERLOAD
//                   Compares two logs to allow us to  to see if they are the same
//=====================================================================================
bool log_entry::operator==(const log_entry& rhs) const
{
  if(this->host != rhs.host)
    {
      return false;
    }

  else if(this->date != rhs.date)
    {
      return false;
    }
  
  else if(this->time != rhs.time)
    {
      return false;
    }

  else if(this->request != rhs.request)
    {
      return false;
    }
  
  else if(this->status != rhs.status)
    {
      return false;
    }

  else if(this->number_of_bytes != rhs.number_of_bytes)
    {
      return false;
    }
  
  else if(this->check != rhs.check)
    {
      return false;
    }

  else
    {
      return true;
    }
}
//-------------------------------------------------------------------------------------

//5.)
//=====================================================================================
//                                    GET BYTE
//                     Returns the byte count from an entry
//=====================================================================================
int log_entry::getByte() const 
{
  int returnByte = this->number_of_bytes;
  return returnByte;
}
//-------------------------------------------------------------------------------------

bool log_entry::getCheck() const 
{
  bool returnCheck = this->check;
  return returnCheck;
}
//=====================================================================================
//                            ++LOG_ENTRY FREE FUNCTIONS++
//         All of the free functions associated with Log entry can be found below.
//=====================================================================================

//1.)
//=====================================================================================
//                                  PARSE FUNCTION
//         Allows the user to scan through a log file, and create log entries.
//=====================================================================================
std::vector<log_entry> parse(std::istream & in) 
{
    std::vector<log_entry> result;
    
    String line;
    char ch;
    char tmp;
    log_entry check;
    int index = 0;
    in >> ch;
    line += ch;
    while(!in.eof())
      {
	if(index != 0)
	  {
	    line = '0';
	    line = tmp;
	  }

	while(in.get(ch))
	  {	
	    if(ch == '\n' && '\r')
	      {
		//std::cout << line << std::endl;
		log_entry entry(line);
		result.push_back(entry);
		break;
	      }
	    line+= ch;
	  }
	line += ch;
	tmp = ch;
	++index;
      }
    
    return result;
}
//-------------------------------------------------------------------------------------

//2.)
//=====================================================================================
//                                  BYTE_COUNT
//                 Adds up the total byte count from the log file.
//=====================================================================================
int byte_count(const std::vector<log_entry>& logFile) 
{
  int fileLen = logFile.size();
  int total = 0;
  int tmp = 0;
  for (int index = 0; index < fileLen; ++index)
    {
      tmp = logFile[index].getByte();
      total += tmp;
      tmp = 0;
    }
    return total;
}
//-------------------------------------------------------------------------------------


//3.)
//=====================================================================================
//                                  BY_HOST
//                       Prints out the Host per log entry.
//=====================================================================================
void by_host(const std::vector<log_entry>& logFile) 
{
  int fileLen = logFile.size();

  for (int index = 0; index < fileLen; ++index)
    {
      logFile[index].hostOutput();
    }
}
//-------------------------------------------------------------------------------------


//4.)
//=====================================================================================
//                                  OUTPUT_ALL
//                 Prints out all of the log entries gathered from a file.
//=====================================================================================
void output_all(std::ostream & out, const std::vector<log_entry> & logFile) 
{
  int fileLen = logFile.size();
  
  for (int index = 0; index < fileLen; ++index)
    {
      if(logFile[index].getCheck() == true)
	{
	  out << logFile[index];
	}
    }
}
//-------------------------------------------------------------------------------------


//=====================================================================================
//                        ------ END OF LOG_ENTRY ADT ------ 
//=====================================================================================
////////////////////////////////////////////////////////////////////////////////////////
//                              --------------------                                  //
//                              END OF LOG_ENTRY CPP                                  //
//                              --------------------                                  //
////////////////////////////////////////////////////////////////////////////////////////