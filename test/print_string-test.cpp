#include "turing-test-head.h"
string print_string(string row)
{
    return row;
}

TEST_CASE("Print_string-test", "[TEST]")
{
    REQUIRE(print_string("10101001010101") == "10101001010101");
    cout << "test [print_string 1] successful" << endl;
    REQUIRE(print_string("fusdfbsdgbsdgvisdgbvd") == "fusdfbsdgbsdgvisdgbvd");
    cout << "test [print_string 2] successful" << endl;
    REQUIRE(print_string("____________________") == "____________________");
    cout << "test [print_string 3] successful" << endl;
    REQUIRE(print_string("165+354") == "165+354");
    cout << "test [print_string 4] successful" << endl;
    REQUIRE(print_string("12e(3)3(2)q1") == "12e(3)3(2)q1");
    cout << "test [print_string 5] successful" << endl;
    REQUIRE(print_string("(123123)-(2)+(32323)=") == "(123123)-(2)+(32323)=");
    cout << "test [print_string 6] successful" << endl;
    REQUIRE(print_string("!@#$%^*") == "!@#$%^*");
    cout << "test [print_string 7] successful" << endl;
    REQUIRE(print_string("(adsadadad)(asdadasdasda)")
            == "(adsadadad)(asdadasdasda)");
    cout << "test [print_string 8] successful" << endl;
    REQUIRE(print_string("hello world!") == "hello world!");
    cout << "test [print_string 9] successful" << endl;
    REQUIRE(print_string("|abababbababa|") == "|abababbababa|");
    cout << "test [print_string 10] successful" << endl;
    cout << "TEST PRINTSTRING.cpp is done" << endl;
}


