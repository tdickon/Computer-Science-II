#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  {
    //Test One
    String test = "hello;world";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';');
    assert(result[0] == "hello");
    assert(result[1] == "world");
  }
  std::cout << "===========================================================================================================" << std::endl;

  {
    //Test Two
    String test = "hello;world;one";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';');
    assert(result[0] == "hello");
    assert(result[1] == "world");
    assert(result[2] == "one");
  }
  std::cout << "===========================================================================================================" << std::endl;

  {
    //Test Three
    String test = "hello;;world";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';');
    assert(result[0] == "hello");
    assert(result[1] == '\0');
    assert(result[2] == "world");
  }

  std::cout << "===========================================================================================================" << std::endl;

  {
    //Test Four
    String test = "h;;world";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';');
    assert(result[0] == "h");
    assert(result[1] == '\0');
    assert(result[2] == "world");
  }
  std::cout << "===========================================================================================================" << std::endl;

   {
    //Test Five
    String test = ";;hello;world";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';');
    assert(result[0] == '\0');
    assert(result[1] == "hello");
    assert(result[2] == "world");
  }
  std::cout << "===========================================================================================================" << std::endl;

  {
    //Test Six
    String test = ";;hello;world";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(','); //Note that this should return an error.
    assert(result[0] == '\0');
  }

  std::cout << "===========================================================================================================" << std::endl;

  {
    //Test Six
    String test = "hello  world";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(' ');
    assert(result[0] == "hello");
    assert(result[1] == '\0');
    assert(result[2] == "world");
  }

  std::cout << "===========================================================================================================" << std::endl;

  {
    //Test Seven
    String test = "hello;world;";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';');
    assert(result[0] == "hello");
    assert(result[1] == "world");
  }
  std::cout << "===========================================================================================================" << std::endl;

{
    //Test Eight
    String test = "hello;world;;";
    std::cout << "Original String: " << test << std::endl;
    std::vector<String> result = test.split(';'); 
    assert(result[0] == "hello");
    assert(result[1] == "world");
    assert(result[2] == '\0');
  }
  std::cout << "===========================================================================================================" << std::endl;
  std::cout << "\nCOMPLETED TESTING SPLIT!" << std::cout << std::endl;
}  