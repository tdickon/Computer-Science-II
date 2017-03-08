/**
 * Tyler Dickon
 * bigint
 *CS23001
 */

#include <iostream>
#include<cmath>
#include "bigint.hpp"

//==========================================================================================
//****BIG_INT FUNCTION CLASS DEFINITIONS****
//==========================================================================================
//A.)CONSTRUCTOR DEFINITIONS
//-------------------------------------------------------------------------------------
//1.)bigint default constructor -- intializes the array to zero in each element.
bigint::bigint()
{
  for (int index  = 0; index < MAX_INT; ++index)
    bigintArray[index] = 0;
}
//-------------------------------------------------------------------------------------
//2.)bigint constructor that that initalizes the array to the element that you specify. 
bigint::bigint(int number) :bigint()
{
  int index = 0; 

  
  while(number > 0)
    {
      bigintArray[index] = number % 10;
      number = number / 10; //Takes us to the next sequence in our int.
      ++index;
    }
}
//-----------------------------------------------------------------------------------
//3.)bigint constructor that intializes to a char[] that is provided.
bigint::bigint(const char number[]) :bigint()
{
  int size = 0;
  int index = 0;

  //Finds the total size of the character digit until it reaches the end.
  while(number[size]!= '\0')
    ++size;

  --size; //Subtract one from the total size to get the max element.

  //Convert the character into an integer and then place it in the end of the int array
  while(size >= 0)
    {
      bigintArray[index] = (number[size] - '0');
      --size;
      ++index;
    }
}
//-----------------------------------------------------------------------------------
//=========================================================================================
//B.)DEBUGGING FUNCTION DEFINITIONS 
//-----------------------------------------------------------------------------------
//1.) debug_print function -- allows us to print out our bigint arrays
void bigint::debug_print(std::ostream & out) const
{
  out << "|";
  for (int index = 0; index < MAX_INT; ++index)
    out << bigintArray[index] << " |";
}
//----------------------------------------------------------------------------------
//=========================================================================================
//C.)OPERATOR OVERLOADING
//-----------------------------------------------------------------------------------
//1.)Overloading the << operator to allow us to print out the number input into the class
std::ostream& operator<<(std::ostream& out, bigint number)
{
  int lineMax = 70;
  int  counter = 0; 

  for (int index = MAX_INT - 1; index >= 0; --index)
    {
      //Prints out the non-zero number and then ends the array.
      if (number.bigintArray[index] != 0)
	{
	  while(index >= 0)
	    {
	      if (counter != 0 && (counter % lineMax) == 0)
		{
		  std::cout << std::endl;
		}
	      out << number.bigintArray[index];
	      --index;
	      ++counter;
	    }
	  continue; //Since we reached the end of the array we skip to the top and end the loop.
	}

      //If no digits are found beforehand and last digit = 0, we output zero.
      if(index == 0 && number.bigintArray[index] == 0)
	 std::cout << "0. You either input 0 or failed to input a number." << std::endl;
    }

      std::cout << std::endl;
      return out; //Return the ostream to the main to be output to the user.
}
//---------------------------------------------------------------------------------
//2.)Overloading the == operator to allow us to compare two bigint classes
  bool bigint::operator==(const bigint& right)
  {
    //Runs a for loop through the elements to see if the two objects match.
    for(int index = 0; index < MAX_INT; ++index)
      {
	if (right.bigintArray[index] != bigintArray[index])
	  return false;
      }
    return true; //If the numbers cyle through, without defaulting, then the numbers match.
  }
//---------------------------------------------------------------------------------
//3.)Overloading the subscript operator ([]) to allow us to specifially return a specific digit in a certain position.
int bigint::operator[](int digit) const
{
  return bigintArray[digit];
}
//---------------------------------------------------------------------------------
//4.)Overloading the addition operator (+) to allow us to add two bigints together. 
bigint bigint::operator+(bigint& right)
{
  bigint bi;
  int tmp = 0;
  int carryOver = 0; //Will allow us to carry over any trailing numbers to the next array.
  for(int index = 0; index < MAX_INT; ++index)
    {
      tmp = right.bigintArray[index] + bigintArray[index] + carryOver;
      carryOver = 0;

      if(tmp >= 10)
	{
	  bi.bigintArray[index] = (tmp % 10);
	  while(tmp > 0)
	    {
	      carryOver = (tmp / 10);
	      tmp = 0;
	    }
	}

      else
	{
	  bi.bigintArray[index] = tmp;
	  tmp = 0;
	}
    }
  return bi;
}
//-----------------------------------------------------------------------------------------------------------------------
//5.) Overloading the input operator (>>) to allow bigint to take numbers until a ; is reached.
std::istream& operator>>(std::istream& in, bigint& number)
{
  char tmp[MAX_INT] = {}; //Establishes the null terminator at the end of the array. 
  char digit;

  for (int index = 0; index < MAX_INT - 1 && in >> digit && digit != ';'; ++index)
    {
      tmp[index] = digit;
    }

  number = bigint(tmp);

  return in;
}
//-----------------------------------------------------------------------------------------------------------------------
//6.)Overloading the multiplication operator to allow us to multiply two bigints together.
bigint bigint::operator*(bigint & right)
{
  bigint tmp, product;
  int rightLengthSize = right.length();
  int rightIndex = 0;

  for (int index = 0; index < MAX_INT; ++index)
    {
      tmp = this->times_digit(right.bigintArray[index]);

      if (rightIndex < rightLengthSize && rightIndex != 0)
	{
	  tmp = tmp.times_10(rightIndex);
	}
      ++rightIndex;
      product = product + tmp;
    }
  return product;
}
//------------------------------------------------------------------------------------------------------------------------
//========================================================================================================================
//D.)OTHER METHODS
//------------------------------------------------------------------------------------------------------------------------
//1.)bigint times_digit(int) const which allows us to multiply a single digit integer between 0 and 9. 
bigint bigint::times_digit(int multiple) const
{
  bigint bi;
  int tmp = 0;
  int carryOver = 0;

  for (int index = 0; index < MAX_INT; ++index)
    {
      tmp = (bigintArray[index] * multiple) + carryOver;
      carryOver = 0;

      if (tmp >= 10)
	{
	  bi.bigintArray[index] = (tmp % 10);

	  while (tmp > 0)
	    {
	      carryOver = (tmp / 10);
	      tmp = 0;
	    }
	}

      else
	{
	  bi.bigintArray[index] = tmp;
	  tmp = 0;
	}

    }
return bi;
}
//--------------------------------------------------------------------------------------------------------------------------
//2.)bigint times_10(int) const which allows us to shift a bigint by 10.
bigint bigint::times_10(int tenOfN) const
{
  bigint bi;
  int tmp;
  
  for (int index = (MAX_INT - 1); index  >= 0; --index)
    {
      if(this->bigintArray[index] != 0)
      {

	if((index + tenOfN) > MAX_INT)
	  {
	    std::cout << "Error: The number you entered is too large." << std::endl;
	    bi = -1;
	    return bi;
	  }

	while(index >=0)
	  { 
	    tmp = (index + tenOfN);
	    bi.bigintArray[tmp] = bigintArray[index];
	    tmp = 0;
	    --index;
	  }

	continue;
      }

    }

  return bi;
}
//4. Gets the length of the equation. 
int bigint::length()
{
  int counter = 0;
  for (int index = (MAX_INT - 1); index >= 0; --index)
    {
      if(this->bigintArray[index] != 0)
	{
	  while (index >= 0)
	    {
	      ++counter;
	      --index;
	    }

	  continue;
	}
    }

  return counter;
}
//=================================================================================================================================