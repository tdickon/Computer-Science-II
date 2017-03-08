// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.times_digit(1);

        // Verify
        assert(bi == 0);  //Will FAIL, fix and add test cases.
	std::cout << "0 X 1 = " << bi << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_digit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
	std::cout << "3 x 1 = " << bi << std::endl;
    }

        {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(121);

        // Test 
        bi = bi.times_digit(1);

        // Verify
        assert(bi == 121);  //Will FAIL, fix and add test cases.
	std::cout << "121 * 1 = " << bi << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(10);

        // Test 
        bi = bi.times_digit(9);

        // Verify
        assert(bi == 90);  //Will FAIL, fix and add test cases.
	std::cout << "10 x 9 = " << bi << std::endl;
    }

        {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(128);

        // Test 
        bi = bi.times_digit(2);

        // Verify
        assert(bi == 256);  //Will FAIL, fix and add test cases.

	std::cout << "128 x 2 = " <<  bi << std::endl;
    }
    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;

}