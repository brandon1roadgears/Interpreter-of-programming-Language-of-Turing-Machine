#include "turing-test-head.h"
string print_string(string row)
{
    return row;
}

TEST_CASE("Print_string-test", "[TEST]")
{
    REQUIRE(print_string("10101001010101") == "10101001010101");
    REQUIRE(print_string("fusdfbsdgbsdgvisdgbvd") == "fusdfbsdgbsdgvisdgbvd");
    REQUIRE(print_string("____________________") == "____________________");
    REQUIRE(print_string("165+354") == "165+354");
    REQUIRE(print_string("12e(3)3(2)q1") == "12e(3)3(2)q1");
    REQUIRE(print_string("(123123)-(2)+(32323)=") == "(123123)-(2)+(32323)=");
    REQUIRE(print_string("!@#$%^*") == "!@#$%^*");
    REQUIRE(print_string("(adsadadad)(asdadasdasda)")
            == "(adsadadad)(asdadasdasda)");
    REQUIRE(print_string("hello world!") == "hello world!");
    REQUIRE(print_string("|abababbababa|") == "|abababbababa|");
    cout << endl << "TEST PRINTSTRING.cpp is done" << endl;
}


