/**
 * Tyler Dickon
 * bigint
 * C23001
 */

#ifndef CS2_BIGINT_HPP
#define CS2_BIGINT_HPP

//delcaring a global constant size for our fixed arrays in bigint. 

const int MAX_INT = 300;

//========================================================
class bigint
{
private:
  int bigintArray[MAX_INT];

public:
  //CONSTRUCTORS
  bigint(); //Default Constructor
  bigint(int number); //intializes to a vaue you provide.
  bigint(const char number[]); //Initializes to a bigint char you provide.
  //DEBUGGING FUNCTIONS
  void debug_print(std::ostream & out) const;
  //OPERATOR OVERLOADERS
  friend std::ostream& operator<<(std::ostream& out, bigint number);
  friend std::istream& operator>>(std::istream& in, bigint& number);
  bool operator==(const bigint& right);
  int operator[](int digit) const;
  bigint operator+(bigint& right);
  bigint operator*(bigint& right);
  //OTHER METHODS
  bigint times_digit(int) const; //Multiplies a bigint by a single digit
  bigint times_10(int) const; //multiply bigint by 10^n.
  int length(); 
};

#endif