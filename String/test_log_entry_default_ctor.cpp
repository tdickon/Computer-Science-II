#include <iostream>
#include <cassert>
#include "string.hpp"
#include "logentry.hpp"

int main()
{
  {
    log_entry test;
  }
  std::cout << "COMPLETED TESTING THE LOG_ENTRY_DEFAULT_CTOR!" << std::endl;
}