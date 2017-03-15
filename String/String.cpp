#include <iostream>
#include <cassert>
#include "string.hpp"
#include <vector>
//================================================================================================
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
//--------------------------------------------------------------------------
//4.)Initializes to a constant string size.
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
//---------------------------------------------------------------------------
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
  rhs = "";
  char tmp[500];
  if(in >> tmp)
    {
      String returnString(tmp);
      rhs = tmp;
    }
  return in;
}
//------------------------------------------------------------------------


//------------------------------------------------------------------------
//                         SUBSTRING OPERATOR
//------------------------------------------------------------------------
//1.)Returns a string, starting at where the user specified to look
String String::substr(int startPos, int count) const
{
  //Need to check to see if you're looking at an unitialized variable.
  if(str[0] == '\0')
    {
      String tmp;
      return tmp;
    }
  //Sub (Substring) gets the range of characters needed to be output. 
  int sub = startPos + count;
  int len = length();

  if(startPos > len)
    {
      String tmp;
      std::cerr << "ERROR: THE STARTING POSITION IS OUTSIDE OF THE LENGTH OF THE STRING." << std::endl;
      return tmp;
    }
  //checks to make sure we wont access past the characters. 
  if( sub > len)
    {
      int tmp = sub - len;
      count = count - tmp;
    }

  char tmp [count];
  
  //We need to check to see if the user only asks for the firs #
  if(count == 0)
    {
      count += 1;
      tmp[0] = str[startPos];
      tmp[1] = '\0';
      String subString(tmp);
      return subString;
    }

  int charCount = 0;

  for (int index = 0; index < count; ++index)
    {
      tmp[index] = str[startPos];
      ++startPos;
      ++charCount;
    }
  ++charCount; 
  tmp[count] = '\0';
  
  String subS(charCount, tmp); //Create the return string. 
  return subS;
}
//------------------------------------------------------------------------


//------------------------------------------------------------------------
//                         FIND FUNCTIONS
//------------------------------------------------------------------------
//1.)Finds the first instance of a character that the user specifies. 
int String::find(char ch, int startPos) const
{
  int len = length();

  //Make sure that the string actually has characters.
  if(str[0] == '\0')
    {
      std::cout << "\n ERROR: The string you are accessing has no values." << std::endl;
      return -1;
    }

  //Check to Make sure they aren't searching outside of the String. 
  if (startPos > len)
    {
      std::cout << "\n ERROR: You are trying to access outside of the string." << std::endl;
      return -1;
    }

  for (int index = startPos; index <= len; ++index)
    {
      //Check to see if we're on the last element, and if it's not the right value return -1;
      if (index == len && str[index] != ch) {return -1;}
      //If the element == the character, return the index #;
      if (str[index] == ch) { return index; }
    }
}
//------------------------------------------------------------------------
//2.)Find a particular string subset out of a larger string & return the start pos
int String::find(const String & search, int startPos) const 
{
  int searchLength = search.length();
  int len = length();

  //Check to see if the startPos is beyond the original string length.
  if (startPos > len)
    {
      std::cout << "ERROR: Your Starting Position is not inside the current string." << std::endl;
      return -1;
    }

  int total = startPos + searchLength;

  //Check to see if the startPos & total values is inside the string.
  if (total > len)
    {
      std::cout << "ERROR: Your Search String is too big for the original string." << std::endl;
      return -1;
    }

  //Check to see if the user is searching for just one character and return the first instance.
  if(searchLength == 1)
    {
      int result = find(search[0], startPos);
      return result;
    }
    
  bool check = true;
  for (int i = 0; i < len; ++i)
    {
      if((str[i] != search[0]) && ((i + searchLength) > len))
	{
	  std::cout << check << std::endl;
	  return -1;
	}

      if (str[i] == search[0])
	{
	  check = true;
	  int searchIndex = 0;
	  int oIndex = i;
	  while (searchIndex < searchLength)
	    {
	      if (search[searchIndex] != str[oIndex])
		{
		  check = false;
		  break;
		}
	    
	      ++searchIndex;
	      ++oIndex;
	    }

	  if (check == true)
	    {
	      std::cout << check << std::endl;
	      return i;
	    }
	}
	
    }
}
	
//------------------------------------------------------------------------


//------------------------------------------------------------------------
//                          SPLIT FUNCTION
//------------------------------------------------------------------------
//1.)Takes a string and creates a series of substrings.
std::vector<String> String::split(char delimit)
{
  std::vector<String> split;
  int len = length();

  //find the first instance of a delimited character;
  //int prevMark = 0;
  int index = 0;
  
  int prevMark = 0;

  int delimitedMark = find(delimit, index);

  //If we don't find the delimiter return the whole string.
  if (delimitedMark == -1)
    {
      std::cout << "ERROR: the delimiter you are trying to parse, does not exist" << std::endl;
      String result;
      split.push_back(result);
      return split;
    }

  //If the first delimiter is at element zero, move on to the next, element. 
  if(delimitedMark == 0)
    {
      index = delimitedMark + 1;
      
      //Find the next substr
      delimitedMark = find(delimit, index);
    }

  while (index < len)
    {
      std::cout << "DelimitedMark: " << delimitedMark << std::endl;
      //checking to see if we reached the last string value;
      if (delimitedMark == -1)
	{ 
	  int offset = prevMark + 1;
	  int total = (len - prevMark);
	  int subIndex = 0;
	  String result = substr(offset, total);
	  std::cout << result << std::endl;
	  std::cout << "tmp size: " << result.string_size << std::endl;
	  std::cout << "tmp length: " << result.length() << std::endl;
	  std::cout << "tmp capacity: " << result.capacity() << std::endl;
	  std::cout << std::endl;
	  split.push_back(result);
	  index = (len);
	  continue;
	}
      
      //A special testcase in case there is a one character string at the start of the array.
      if((delimitedMark - prevMark) == 1 && str[prevMark] != delimit)
	{
	  String result(str[prevMark]);
	  std::cout << result << std::endl;
	  std::cout << "tmp size: " << result.string_size << std::endl;
	  std::cout << "tmp length: " << result.length() << std::endl;
	  std::cout << "tmp capacity: " << result.capacity() << std::endl;
	  std::cout << std::endl;
	  split.push_back(result);

	  prevMark = delimitedMark;
	  index = delimitedMark + 1;
      
	  //Find the next substr
	  delimitedMark = find(delimit, index);
	  continue;
	}
      
      //Checking to see if there is an empty set
      if ((delimitedMark - prevMark) == 1 && str[prevMark] == delimit)
	{
	  String result;
	  std::cout << result << std::endl;
	  std::cout << "tmp size: " << result.string_size << std::endl;
	  std::cout << "tmp length: " << result.length() << std::endl;
	  std::cout << "tmp capacity: " << result.capacity() << std::endl;
	  std::cout << std::endl;
	  split.push_back(result);

	  prevMark = delimitedMark;
	  index = delimitedMark + 1;
      
	  //Find the next substr
	  delimitedMark = find(delimit, index);
	  continue;
	}

      //Searching for substrings as long as the delimited marker is not an empty set
      if (delimitedMark > 1)
	{
	  int offset;
	  int total;
	  if (prevMark == 0 && str[0] == delimit)
	    {
	      offset = 1;
	      total = (delimitedMark - prevMark);
	    }
	  
	  else  if (prevMark == 0 && str[0] != delimit)
	    {
	      offset = prevMark;
	      total = (delimitedMark - prevMark);
	    }

	  else 
	    {
	      offset = prevMark + 1;
	      std::cerr << "Is else called?"; std::cout << std::endl;
	      std::cerr << "offset: " << offset; std::cout << std::endl;
	      total = (delimitedMark - prevMark - 1);
	      std::cerr<< "DelimitedMark: " << delimitedMark; std::cout << std::endl;
	      std::cerr<< "Previous Mark: " << prevMark; std::cout << std::endl;
	      std::cerr << "DelimitedMark + PrevMark = " << total; std::cout << std::endl;
	    }
	  
	  int subIndex = 0;
	  String result = substr(offset, total);
	  
	  std::cout << result << std::endl;
	  std::cout << "tmp size: " << result.string_size << std::endl;
	  std::cout << "tmp length: " << result.length() << std::endl;
	  std::cout << "tmp capacity: " << result.capacity() << std::endl;
	  std::cout << std::endl;
	  split.push_back(result);
	}

      prevMark = delimitedMark;
      index = delimitedMark + 1;
      
      //Find the next substr
      delimitedMark = find(delimit, index);
    }

  return split;
}
//========================================================================================================

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
