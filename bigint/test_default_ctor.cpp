// bigint Test Program
//
// Tests:  default constructor, uses ==
//
//  
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () 
{
    // Setup
  {
    bigint bi;
    bi.debug_print(std::cout);
    std::cout << std::endl;
  } 
    // Test 
     
 bigint bi;

    // Verify
    assert(bi == 0);
    std::cout << "0 == " << bi << std::endl;

    std::cout << "Done testing default constructor." << std::endl;
}
