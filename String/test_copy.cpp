#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  {
    String test("Hello");
    String test2(test);
    
    assert(test == "Hello");
    assert(test2 == "Hello");
    assert(&test != &test2);
    std::cout << "MEMORY ADDRESS: " << & test << ". VALUE: " << test << std::endl;
    std::cout << "MEMORY ADDRESS COPY: " << & test << ". VALUE COPY: " << test << std::endl;
  }
  std::cout << "DONE TESTING THE COPY CONSTRUCTOR" << std::endl;
}