#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
{
    String s1;
    String s2;
    bool check;
    assert(s1 == '\0');
    assert(s2 == '\0');
    check = (s1 < s2);
    assert(check == false);
    std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;

    check = (s1 <= s2);
    assert(check == true);
    std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 > s2);
    assert(check == false);
    std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;

    check = (s1 >= s2);
    assert(check == true);
    std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 != s2);
    assert(check == false);
    std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
  }
 std::cout << std::endl;
 std::cout << std::endl;
  {
    String s1 = "a";
    String s2 = "b";
    bool check;
    assert(s1 == "a");
    assert(s2 == "b");
    check = (s1 < s2);
    assert(check == true);
    std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;

    check = (s1 <= s2);
    assert(check == true);
    std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 > s2);
    assert(check == false);
    std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;

    check = (s1 >= s2);
    assert(check == false);
    std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 != s2);
    assert(check == true);
    std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
  }
 std::cout << std::endl;
 std::cout << std::endl;
  {
    String s1;
    String s2 = "b";
    bool check;
    assert(s1 == '\0');
    assert(s2 == "b");
    check = (s1 < s2);
    assert(check == true);
    std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;

    check = (s1 <= s2);
    assert(check == true);
    std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 > s2);
    assert(check == false);
    std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;

    check = (s1 >= s2);
    assert(check == false);
    std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 != s2);
    assert(check == true);
    std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;
{
    String s1 = "apple";
    String s2 = "application";
    bool check;
    assert(s1 == "apple");
    assert(s2 == "application");
    check = (s1 < s2);
    assert(check == true);
    std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;

    check = (s1 <= s2);
    assert(check == true);
    std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 > s2);
    assert(check == false);
    std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;

    check = (s1 >= s2);
    assert(check == false);
    std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 != s2);
    assert(check == true);
    std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
  }
 std::cout << std::endl;
 std::cout << std::endl;
{
    String s1 = "application";
    String s2 = "application";
    bool check;
    assert(s1 == "application");
    assert(s2 == "application");
    check = (s1 < s2);
    assert(check == false);
    std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;

    check = (s1 <= s2);
    assert(check == true);
    std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 > s2);
    assert(check == false);
    std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;

    check = (s1 >= s2);
    assert(check == true);
    std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 != s2);
    assert(check == false);
    std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
  }
 std::cout << std::endl;
 std::cout << std::endl;

{
    String s1 = "apple";
    char s2 = 'a';
    bool check;
    assert(s1 == "apple");
    assert(s2 == 'a');
    check = (s1 < s2);
    assert(check == false);
    std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;

    check = (s1 <= s2);
    assert(check == false);
    std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 > s2);
    assert(check == true);
    std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;

    check = (s1 >= s2);
    assert(check == true);
    std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;

    check = (s1 != s2);
    assert(check == true);
    std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
 }

 std::cout << std::endl;
 std::cout << std::endl;

 {
   String s1 = "apple";
   char *s2 = "tree";
   bool check;
   assert(s1 == "apple");
   assert(s2 == "tree");
   check = (s1 < s2);
   assert(check == true);
   std::cout << s1 << " is less than " << s2 << "? " << check << std::endl;
   
   check = (s1 <= s2);
   assert(check == true);
   std::cout << s1 << " is less than or equal to " << s2 << "? " << check << std::endl;
   
   check = (s1 > s2);
   assert(check == false);
   std::cout << s1 << " is greater than " << s2 << "? " << check << std::endl;
   
   check = (s1 >= s2);
   assert(check == false);
   std::cout << s1 << " is greater than or equal to " << s2 << "? " << check << std::endl;
   
   check = (s1 != s2);
   assert(check == true);
   std::cout << s1 << " is not equal to " << s2 << "? " << check << std::endl;
 }

 std::cout << std::endl;
 std::cout << std::endl;

 std::cout << "COMPLETED TESTING EQUALITIES" << std::endl;
}
