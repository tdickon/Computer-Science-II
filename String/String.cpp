#include <iostream>
#include <cassert>
#include "string.hpp"

//==========================================================================================================================
/**
 **Class definitions created by Tyler Dickon
 **Using class prototypes from class.
 */

//--------------------------------------------------------------------------
//                ********STRING CLASS DEFINITIONS******** 
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//                        DESTRUCTOR DEFINITIONS
//--------------------------------------------------------------------------
String::~String()
{
  delete [] str;
}
//--------------------------------------------------------------------------
//                        CONSTRUCTOR DEFINITIONS
//--------------------------------------------------------------------------
//1.)Default constructor, that establishes the string class to a null pointer. 
String::String() 
{
  string_size = 1;
  str = new char [string_size];
  str[0] = '\0';
}
//--------------------------------------------------------------------------
//2.)Initializing an object to a character.

String::String(char ch)
{
  string_size = 2;
  str = new char [string_size];
  str[0] = ch;
  str[1] = '\0';
}
//--------------------------------------------------------------------------
//3.)Initializes a string to an empty array the size of a specified int
String::String(int size)
{
  string_size = (size + 1);
  str = new char [string_size];
  str[size - 1] = '\0';
}

//3.)Initializes to a constant string size.
String::String(const char * ch)
{
  int pos = 0;
  
  while(ch[pos] != '\0') { ++pos; }
  string_size = (pos + 1);
   str = new char [string_size];
  for (int index = 0; index < string_size; ++index) 
    { 
      str[index] = ch[index];
    }
}
//---------------------------------------------------------------------------
//4.PRIVATE: Intializes a c str to a specific capacity
String::String(int n, const char * ch)
{
  string_size = n;
  int index = 0;
  str = new char [string_size];
  while(ch[index] != '\0') 
    {
      str[index] = ch[index];
      ++index;
    }
  str[index] = '\0';
}
//----------------------------------------------------------------------------


//---------------------------------------------------------------------------
//                              COPY CONSTRUCTOR
//---------------------------------------------------------------------------
String::String(const String & og)
{
  this->string_size = og.string_size;
  this->str = new char [string_size];
  std::cout << std::endl;

  for (int index = 0; index < this->string_size; ++index) { this->str[index] = og.str[index]; }
}

//---------------------------------------------------------------------------
//                              OBJECT METHODS
//---------------------------------------------------------------------------
//1.)Length method, that allow us to get the size of our array.
inline int String::length() const
{
  int size = 0;

  while(str[size] != '\0')
    {
      ++size;
    }

  return size;
}
//--------------------------------------------------------------------------
//2.)Capacity Method, returns the max size of characters not counting null.                     
int String::capacity() const
{
  return (string_size - 1);
}
//--------------------------------------------------------------------------
//3.)PRIVATE: reset capacity, resets the capacity of the string
void String::reset_capacity(int n)
{
  String tmp(n, str);
  this->swap(tmp);
}

//---------------------------------------------------------------------------
//                       SUBSCRIPT OVERLOADING
//---------------------------------------------------------------------------
//1.)Subscript operator that accesses a subscript and allows for manipulation.
char & String::operator[](int i)
{

  assert(i >= 0);
  assert(i <=  this->length());
  return this->str[i];
}
//--------------------------------------------------------------------------
//2.)Subscript operator that allows acces, but no manipulation of values.
char String::operator[](int i) const
{
  assert(i >= 0);
  assert(i <= this->length());
  return this->str[i];  
}

//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//                        CONCATENATION OVERLOADING
//--------------------------------------------------------------------------
//1.)addition operator, adds two strings together.
String String::operator+(const String & rhs) const
{
  int resultSize = this->length() + rhs.length() + 1;
  String result(resultSize, str);
  
  int pos = 0;
  int offset = length();

  while(rhs.str[pos] != '\0')
    {
      result.str[offset + pos] = rhs.str[pos];
      ++pos;
    }
  result.str[offset+pos] = '\0';

  for (int index = 0; index < result.string_size; ++index)
    {
      std::cerr << "str[" << index << "]: " << result.str[index]; std::cout << std::endl;
    }

  std::cerr << "STRING SIZE: "<< result.string_size; std::cout << std::endl;
  std::cerr << "LENGTH: " << result.length(); std::cout << std::endl;
  std::cerr << "CAPACITY: " << result.capacity(); std::cout << std::endl;
  std::cout << std::endl;
  return result;
}


//2.)assignment overloading
String & String::operator+=(String rhs)
{
  int resultSize = this->length() + rhs.length() + 1;
  this->reset_capacity(resultSize);
  int pos = 0;
  int offset = length();

  while(rhs.str[pos] != '\0')
    {
      this->str[offset + pos] = rhs.str[pos];
      ++pos;
    }
  this->str[offset+pos] = '\0';

  for (int index = 0; index < this->string_size; ++index)
    {
      std::cerr << "str[" << index << "]: " << this->str[index]; std::cout << std::endl;
    }

  std::cerr << "STRING SIZE: "<< this->string_size; std::cout << std::endl;
  std::cerr << "LENGTH: " << this->length(); std::cout << std::endl;
  std::cerr << "CAPACITY: " << this->capacity(); std::cout << std::endl;
  std::cout << std::endl;
  return *this;
}

//--------------------------------------------------------------------------
//                         EQUALALITY OPERATOR OVERLOAD
//--------------------------------------------------------------------------
bool String::operator==(const String & rhs) const
{
  int pos = 0;

  if(this->length() != rhs.length())
    {
      return false;
    }    
  while((this->str[pos] != 0) && (this->str[pos] == rhs.str[pos]))
    {
      ++pos;
    }

  return this->str[pos] == rhs.str[pos];    
}
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
//                         SWAPPING FUNCTION
//-------------------------------------------------------------------------
void String::swap(String & rhs)
{
  char *tmp = str;
  str = rhs.str;
  rhs.str = tmp;

  int tmpSize = string_size;
  string_size = rhs.string_size;
  rhs.string_size = tmpSize;
}
//--------------------------------------------------------------------------


//--------------------------------------------------------------------------
//                         EQUAL OPERATOR OVERLOADING
//--------------------------------------------------------------------------
String& String::operator=(String rhs)
{
  this->swap(rhs);
  return *this;
}
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//                         LESS THAN OPERATOR OVERLOAD
//--------------------------------------------------------------------------
bool String::operator<(const String& rhs) const 
{
  int pos = 0;
  while((str[pos] == rhs.str[pos]) && (rhs.str[pos] != 0) && (str[pos] == rhs.str[pos]))
    {
      ++pos;
    }

  return str[pos] < rhs.str[pos];
}

//--------------------------------------------------------------------------
//                     OUTPUT OPERATOR OVERLOADING
//--------------------------------------------------------------------------
std::ostream & operator<<(std::ostream & out, const String & rhs)
{
  out << rhs.str;
  return out;
}
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//                     INPUT OPERATOR OVERLOADING
//--------------------------------------------------------------------------
std::istream & operator>>(std::istream& in, String & rhs)
{
  in >> rhs.str;
  return in;
}
//------------------------------------------------------------------------

//=====================================================================================================================================================

  //**Free Functions created by Tyler Dickon
  //**Created on 2/26/2016

//--------------------------------------------------------------------------
//                ********FREE FUNCTION DEFINITIONS******** 
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//                      ADDITION OPERATOR OVELOADING
//--------------------------------------------------------------------------
//1.)Overloading to allow a character array add to a String object.
String operator+(const char *lhs, String & rhs)
{
  String tmp(lhs);
  String result = tmp + rhs;
  return result;
}
//-------------------------------------------------------------------------
//2.)Overloading to allow a single character add to a string object.
String operator+(char lhs, const String & rhs)
{
  String tmp(lhs);
  String result = tmp + rhs;
  return result;
}
//------------------------------------------------------------------------


//--------------------------------------------------------------------------
//                      EQUALITY OPERATOR OVELOADING
//--------------------------------------------------------------------------

//1.)Comparing a character array to a String object.
bool operator==(const char *lhs, const String & rhs)
{
  String tmp(lhs);
  return (tmp == rhs);
}
//--------------------------------------------------------------------------
//2.) Comparing a single character to a String object.
bool operator==(char lhs, const String & rhs)
{
  String tmp(lhs);
  return (tmp == rhs);
}
//-------------------------------------------------------------------------


//-------------------------------------------------------------------------
//                    LESS THAN OPERATOR OVELOADING
//-------------------------------------------------------------------------
//1.)Allows us to see if a character array is less than a string object.
bool operator<(char *lhs, const String & rhs)
{
  String tmp(lhs);
  return (tmp < rhs);
}
//------------------------------------------------------------------------
//2.) Allows us to see if a character is less than a string object.
bool operator<(char lhs, const String & rhs)
{
  String tmp(lhs);
  return (tmp < rhs);
}
//-------------------------------------------------------------------------


//-------------------------------------------------------------------------
//               LESS THAN EQUAL TO OPERATOR OVELOADING
//-------------------------------------------------------------------------
//1.)Allows us to see if a character array is less than or equal a string object.
bool operator<=(const String & lhs, const String & rhs)
{
  if((lhs < rhs) || (lhs == rhs)) { return true; }

  else { return false; }
}

//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
//                    GREATER THAN OPERATOR OVERLOADING
//-------------------------------------------------------------------------
//1.)Allows us to see if a character array is greater than the string obj
bool operator>(const String & lhs, const String & rhs)
{
  if (lhs == rhs) { return false; }

  else { return !(lhs < rhs); }
}
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
//               GREATER THAN EQUAL TO OPERATOR OVELOADING
//-------------------------------------------------------------------------
//1.)Allows us to see if a character array is less than or equal a string object.
bool operator>=(const String & lhs, const String & rhs)
{
  bool tmp = (lhs > rhs);
  if ((tmp == true) || (lhs == rhs)) { return true; }

  else { return false; }
}
//------------------------------------------------------------------------


//-------------------------------------------------------------------------
//                       INEQUALITY OPERATOR
//-------------------------------------------------------------------------
//1.)Allows us to see if a character array is less than or equal a string object.
bool operator!=(const String & lhs, const String & rhs)
{
  return !(lhs == rhs);
}
//-------------------------------------------------------------------------
//==========================================================================================================================