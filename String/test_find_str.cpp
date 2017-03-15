#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  std::cout << "\n" << std::endl;

  {
    //Test 1: Making Sure we get the values we need."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "Why";

    int result = test.find(find, testPos);
    assert(result == 0);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }
  
  std::cout << std::endl;
  
  {
    //Test 2: Making Sure we get the values we need."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "What";

    int result = test.find(find, testPos);
    std::cerr << "result = " << result << std::endl;
    assert(result == 4);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }
  
  std::cout << std::endl;

  {
    //Test 3: Making Sure we get the values we need."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "Wacky";

    int result = test.find(find, testPos);
    assert(result == 9);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }
  
  std::cout << std::endl;

  {
    //Test 4: Making Sure we get the values we need."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "Wrap";

    int result = test.find(find, testPos);
    assert(result == 15);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }
  
  std::cout << std::endl;

  {
    //Test 4: Making Sure we get the values we need."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "Wreck";

    int result = test.find(find, testPos);
    assert(result == 20);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }

  std::cout << std::endl;

  
 {
    //Test 5: Checking to see if it can't find the right value."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "yes";

    int result = test.find(find, testPos);
    std::cerr << result; std::cout << std::endl;
    assert(result == -1);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }
  
  std::cout << std::endl;
  
  {
    //Test 6: Checking to see if we look out of bounds."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 45;
    String find = "Why";

    int result = test.find(find, testPos);
    assert(result == -1);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }

  {
    //Test 7: Checking to see if the search size is actually inside of the array."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 20;
    String find = "Wreckss";

    int result = test.find(find, testPos);
    assert(result == -1);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }

  {
    //Test 8: Check to see if they are searching for one char."
    String test = "Why What Wacky Wrap Wreck";
    int testPos = 0;
    String find = "r";

    int result = test.find(find, testPos);
    assert(result == 16);
    std::cout << "The Original String: " << test << std::endl;
    std::cout << "The word you searched for: " << find << std::endl;
    std::cout << "The Words starting position: " << result << std::endl;
  }

  std::cout << "COMPLETED TESTING THE STRING FIND METHOD" << std::endl;
}