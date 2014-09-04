//!
//! @file 			BasicTests.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created		2014-09-04
//! @last-modified 	2014-09-04
//! @brief 			Contains basic tests.
//! @details
//!					See README.rst in root dir for more info.

// System includes
#include <iostream>

// User source
#include "../api/MUnitTestApi.hpp"

using namespace MbeddedNinja;

namespace MUnitTestTestsNs
{

		MTEST(BasicCapacityTest)
		{
			//MbeddedNinja::MString myString("Testing");
			std::cout << "Testing" << std::endl;
			CHECK(false);
			// Check capacity is calculated correctly
			CHECK_EQUAL("Testing", "Testing1");
		}

} // namespace MUnitTestTestsNs
