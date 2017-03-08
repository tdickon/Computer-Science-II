#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  std::cout << "Testing individual characters, it should output: Naruto Uzumaki!" << std::endl;
  {
    String test('N');
    assert(test == 'N');
    std::cout << test << " | ";
  }

  {
    String test('a');
    assert(test == 'a');
    std::cout << test << " | ";
  }

  {
    String test('r');
    assert(test == 'r');
    std::cout << test << " | ";
  }

  {
    String test('u');
    assert(test == 'u');
    std::cout << test << " | ";
  }

  {
    String test('t');
    assert(test == 't');
    std::cout << test << " | ";
  }

  {
    String test('o');
    assert(test == 'o');
    std::cout << test << " | ";
  }

  {
    String test(' ');
    assert(test == ' ');
    std::cout << test << " | ";
  }

  {
    String test('U');
    assert(test == 'U');
    std::cout << test << " | ";
  }

  {
    String test('z');
    assert(test == 'z');
    std::cout << test << " | ";
  }

  {
    String test('u');
    assert(test == 'u');
    std::cout << test << " | ";
  }

  {
    String test('m');
    assert(test == 'm');
    std::cout << test << " | ";
  }

  {
    String test('a');
    assert(test == 'a');
    std::cout << test << " | ";
  }

  {
    String test('k');
    assert(test == 'k');
    std::cout << test << " | ";
  }

  {
    String test('i');
    assert(test == 'i');
    std::cout << test << " | ";
  }

  {
    String test('!');
    assert(test == '!');
    std::cout << test << " | " << std::endl;
  }
  std::cout << "DONE TESTING THE CHARACTER CONSTRUCTOR" << std::endl;
}