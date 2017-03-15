#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  {
    //Test 1: Testing to make sure we get some sort of value."
    char testChar = 'h';
    int testPos = 0;
    String test = "hello";
    
    int result = test.find(testChar, testPos);
    assert(test == "hello");
    assert(result == 0);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  std::cout << "\n" << std::endl;

  {
    //Test 2: Testing to make sure we get -1 for not finding the value"
    char testChar = 'h';
    int testPos = 1;
    String test = "hello";
    
    int result = test.find(testChar, testPos);
    assert(test == "hello");
    assert(result == -1);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  std::cout << "\n" << std::endl;

  {
    //Test 3: Testing with a default string"
    char testChar = 'h';
    int testPos = 1;
    String test;
    
    int result = test.find(testChar, testPos);
    assert(test == '\0');
    assert(result == -1);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  std::cout << "\n" << std::endl;

{
    //Test 4: Testing to make sure we find the first L"
    char testChar = 'l';
    int testPos = 0;
    String test = "hello";
    
    int result = test.find(testChar, testPos);
    assert(test == "hello");
    assert(result == 2);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  std::cout << "\n" << std::endl;

  {
    //Test 6: Testing to make sure we get the 2nd value l"
    char testChar = 'l';
    int testPos = 3;
    String test = "hello";
    
    int result = test.find(testChar, testPos);
    assert(test == "hello");
    assert(result == 3);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  std::cout << "\n" << std::endl;

  {
    //Test 8: Testing to make sure we can cycle through to find the last number."
    char testChar = 'o';
    int testPos = 0;
    String test = "hello";
    
    int result = test.find(testChar, testPos);
    assert(test == "hello");
    assert(result == 4);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  {
    //Test 9: Testing to make sure we can't find a non value"
    char testChar = 'x';
    int testPos = 0;
    String test = "hello";
    
    int result = test.find(testChar, testPos);
    assert(test == "hello");
    assert(result == -1);
    std::cout << "The String: " << test << std::endl;
    std::cout << "The character searched for: " << testChar << std::endl;
    std::cout << "Starting Position: " << testPos << std::endl;
    std::cout << "Found at position: " << result << std::endl;
  }

  std::cout << "\n" << std::endl;

  std::cout << "COMPLETED TESTING THE FIND CHARACTER METHOD" << std::endl;

}