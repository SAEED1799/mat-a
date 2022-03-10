/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "mat.hpp"
using namespace ariel;
#define CHECK DOCTEST_CHECK
#include <string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}



TEST_CASE("Good input") {


	CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
													"@-------@\n"
													 "@-@@@@@-@\n"
													 "@-@---@-@\n"
													 "@-@@@@@-@\n"
													 "@-------@\n"
													 "@@@@@@@@@"));
    CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@@@@@\n"
													"@-----------@\n"
													 "@-@@@@@@@@@-@\n"
													 "@-----------@\n"
													 "@@@@@@@@@@@@@\n"
													 ));
    CHECK(nospaces(mat(11, 7, '@', '-')) == nospaces("@@@@@@@@@@@\n"
													"@@-------@@\n"
													 "@@-@@@@@-@@\n"
													 "@@-@---@-@@\n"
													 "@@-@@@@@-@@\n"
													 "@@-------@@\n"
													 "@@@@@@@@@@@"));                                                                                                                                                
	/* Add more test here */
}

TEST_CASE("Bad input") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
    CHECK_THROWS(mat(9, 7, '$', '%'));
    CHECK_THROWS(mat(5, 10, '$', '%'));
    CHECK_THROWS(mat(11, 8, '$', '%'));
    CHECK_THROWS(mat(13, 9, '$', '%'));
    CHECK_THROWS(mat(9, 13, '$', '%'));
    CHECK_THROWS(mat(20, 3, '$', '%'));
    CHECK_THROWS(mat(3, 5, '$', '%'));
    CHECK_THROWS(mat(10, 7, '$', '%'));
    CHECK_THROWS(mat(7, 12, '$', '%'));
    CHECK_THROWS(mat(5, 4, '$', '%'));
    CHECK_THROWS(mat(20, 5, '$', '%'));
    CHECK_THROWS(mat(8, 8, '$', '%'));
    CHECK_THROWS(mat(13,11, '$', '%'));
    CHECK_THROWS(mat(2, 3, '$', '%'));
    CHECK_THROWS(mat(33, 3, '$', '%'));
    CHECK_THROWS(mat(11, 5, '$', '%'));
    CHECK_THROWS(mat(10, 5, '$', '%'));
    CHECK_THROWS(mat(10, 12, '$', '%'));
    CHECK_THROWS(mat(10, 14, '$', '%'));
    CHECK_THROWS(mat(3, 2, '$', '%'));
    CHECK_THROWS(mat(3, 6, '$', '%'));
    CHECK_THROWS(mat(17, 7, '$', '%'));
    /* Add more test here */
}


/* Add more test cases here */

