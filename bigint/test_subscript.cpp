// bigint Test Program
//
// Tests:  subscript, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
  //Testing with the default constructor

    {
      bigint bi;
      int digit = bi[0];
      assert(bi == 0);
      assert(digit == 0);

      std::cout<<"The digit you pulled is: " << digit << std::endl;
    }

    {
      bigint bi;
      int digit = bi[1];
      assert(bi == 0);
      assert(digit == 0);

      std::cout<<"The digit you pulled is: " << digit <<  std::endl;
    }

    
    {
      bigint bi;
      int digit = bi[52];
      assert(bi == 0);
      assert(digit == 0);

      std::cout<<"The digit you pulled is: " << digit << std::endl;
    }


    {
      bigint bi;
      int digit = bi[99];
      assert(bi == 0);
      assert(digit == 0);

      std::cout<<"The digit you pulled is: " << digit << std::endl;
    }
    {
      bigint bi;
      int digit = bi[MAX_INT];
      assert(bi == 0);
      assert(digit == 0);

      std::cout<<"The digit you pulled is: " << digit  << std::endl;
    }
    //------------------------------------------------------------------------------------
    //Testing the INT constructor    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4); 
        assert(digit == 4);

	std::cout << "The digit you pulled is: " << digit << std::endl;
    }
    
    {
      bigint bi(12);
      int digit = bi[1];
      assert(bi == 12);
      assert(digit == 1);

      std::cout<<"The digits you pulled is: " << digit << std::endl;
    }

    {
      bigint bi(123);
      int digit = bi[4];
      assert(bi == 123);
      assert(digit == 0);

      std::cout<<"The digits you pulled is: " << digit << std::endl;
    }
    

    {
      bigint bi(21);
      int digit = bi[1];
      assert(bi == 21);
      assert(digit == 2);

      std::cout<<"The digits you pulled is: " << digit << std::endl;
    }

    //-------------------------------------------------------------------------
    //Testing the char array

    {
      bigint bi("23467");
      int digit = bi[3];
      assert(bi == 23467);
      assert(digit == 3);

      std::cout<<"The digits you pulled is: " << digit << std::endl;
    
    }
    {
      bigint bi("23467");
      int digit = bi[5];
      assert(bi == 23467);
      assert(digit == 0);

      std::cout<<"The digits you pulled is: " << digit << std::endl;
    
    }
     
    std::cout << "Done testing subscript." << std::endl;
}