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
        bigint bi(3);

        // Test 
        bi = bi.times_10(0);

        // Verify
	assert(bi == 3); 

	std::cout <<  "3 * 10^2 = " << bi << std::endl;
    }
    

     {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(1);

        // Verify
        assert(bi == 30);  
	std::cout << "3 * 10^1 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(2);

        // Verify
        assert(bi == 300); 
	std::cout << "3 * 10^2 =  " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(3);

        // Verify
        assert(bi == 3000);  
	std::cout << "3 * 10^3 = " << bi << std::endl;
    }
 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(4);

        // Verify
        assert(bi == 30000);  
	std::cout << "3 * 10^4 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(5);

        // Verify
        assert(bi == 300000);
	std::cout << "3 * 10^5 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(6);

        // Verify
        assert(bi == 3000000);  
	std::cout << "3 * 10^6 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(7);

        // Verify
        assert(bi == 30000000);  
	std::cout << "3 * 10^7 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(8);

        // Verify
        assert(bi == 300000000);  
	std::cout << "3 * 10^8 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(9);

        // Verify
        assert(bi == "3000000000");  
	std::cout << "3 * 10^9 = " << bi << std::endl;
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(10);

        // Verify
        assert(bi == "30000000000"); 
	std::cout << "3 * 10^10 = " << bi << std::endl;
    }

    std::cout << "Done testing times_10" << std::endl;
}
