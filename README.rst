=========
MUnitTest
=========

------------------------------------------------------------------------------------------------
A microcontroller-friendly C++ unit test module specifically designed for embedded applications.
------------------------------------------------------------------------------------------------

.. image:: https://api.travis-ci.org/mbedded-ninja/MUnitTest.png?branch=master   
	:target: https://travis-ci.org/mbedded-ninja/MUnitTest

- Author: gbmhunter <gbmhunter@gmail.com> (www.mbedded.ninja)
- First Ever Commit: 2014-09-04
- Last Modified: 2014-09-26
- Version: v1.6.2.0
- Company: mbedded.ninja
- Project: MToolkit Module
- Language: C++
- Compiler: GCC	
- uC Model: n/a
- Computer Architecture: n/a
- Operating System: n/a
- Documentation Format: Doxygen
- License: GPLv3

Description
===========

A microcontroller-friendly C++ unit test module specifically designed for embedded applications.

To be compatible with mid-range microcontrollers, no exceptions are used, the entire module has a no-throw guarantee.
	

External Dependencies
=====================

Nothing here yet.

Issues
======

See GitHub Issues.

Limitations
===========

Nothing here yet.

Usage
=====

See the unit tests in the 'test/' directory for basic examples.

::

	#include "MUnitTest/api/MUnitTestApi.hpp"

	MTEST(BasicTestThatWillAlwaysFail)
	{
		CHECK(false);
	}
	
	MTEST(BasicTestThatWillAlwaysPass)
	{
		CHECK(true);
	}
	
	// The following test is inside a "test group"
	MTEST_GROUP(MyTestGroup)
	{
		MTEST(MakeSureMyVarIsFive)
		{
			CHECK_EQUAL(myVar, 5);
		}
	}
	
	int main()
	{
		// Run all tests, this will run the 
		// three above, and return the result from main()
		// 0 indicates all passed, 1 indicates at least 1 unit test failed
		return TestRegister::RunAllTests();
		
	{
	
	
Changelog
=========

========= ========== ======================================================================================
Version   Date       Comment
========= ========== ======================================================================================
v1.6.2.0  2014-09-26 Added all possible overload variations for CHECK_EQUAL() for C-style strings, currently only a few permutations are defined, and added associated unit tests to new file 'test/CStringTests.cpp', closes #24.
v1.6.1.0  2014-09-19 Corrected actual and expected variables that were the wrong way around in the CheckEqual() and CheckClose() methods defined in MUnitTest.hpp, closes #22.
v1.6.0.0  2014-09-16 Add CHECK_CLOSE() macro for checking things like floats and doubles which may have small rounding errors, closes #21.
v1.5.0.0  2014-09-16 Added MTEST_GROUP() macro so that you can group a bunch of unit tests together, added associated unit tests to 'test/GroupTests.cpp', closes #20.
v1.4.2.0  2014-09-14 Removed semi-colons from the end of the CHECK() and CHECK_EQUAL() macros, which forces you to provide them when you use the macro, and prevents errors when using inside if statements, closes #19.
v1.4.1.0  2014-09-13 Number of tests that have passed/failed is now reported correctly, closes #16. Added CHECK_EQUAL() overload for two const char * data types, closes #18.
v1.4.0.0  2014-09-10 TestRegister::RunAllTests() now returns 0 if successful, else 1, closes #9. Renamed module from 'MUnitTestCpp' to 'MUnitTest', updated README and Makefile accordingly.
v1.3.1.0  2014-09-05 Fixed the bug where macros where missing 'MbeddedNinja' namespace scope from function calls and classes, closes #10.
v1.3.0.0  2014-09-05 Fixed bug where unit test engine reports the incorrect first test name for the second test when there are two tests, closes #6. At completion of unit tests, the number the passed and failed is printed to user, closes #5. Added basic example to README, closes #7.
v1.2.1.0  2014-09-04 Got rid of unneccessary MStringCpp dependency in Makefile.
v1.2.0.0  2014-09-04 Added CHECK_EQUAL() macro and added tests to 'test/BasicTests.cpp', closes #3.
v1.1.0.0  2014-09-04 Added CHECK() macro and added it to 'test/BasicTests.cpp', closes #2.
v1.0.0.0  2014-09-04 Initial commit. Basic TEST() macro works and test code called correctly in ''test/BasicTests.cpp'.
========= ========== ======================================================================================