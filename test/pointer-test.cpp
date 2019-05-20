#include "turing-test-head.h"
void pointer(int point, string row)
{
	string p = row;
	for (long unsigned int i = 0; i < row.length(); i++){
		p[i] = ' ';
  }
	p[point] = '^';
	cout << p << endl;
}
TEST_CASE("POINTER-test", "[TEST]"){
	REQUIRE (pointer(0, "1000000001") == "^         ");
	COUT << "test [pointer 1]" << endl;
	REQUIRE (pointer(1, "1000000001") == " ^        ");
	COUT << "test [pointer 2" << endl;
	REQUIRE (pointer(2, "1000000001") == "  ^       ");
	COUT << "test [pointer 3]" << endl;
	REQUIRE (pointer(3, "1000000001") == "   ^      ");
	COUT << "test [pointer 4]" << endl;
	REQUIRE (pointer(4, "1000000001") == "    ^     ");
	COUT << "test [pointer 5]" << endl;
	REQUIRE (pointer(5, "1000000001") == "     ^    ");
	COUT << "test [pointer 6]" << endl;
	REQUIRE (pointer(6, "1000000001") == "      ^   ");
	COUT << "test [pointer 7]" << endl;
	REQUIRE (pointer(7, "1000000001") == "       ^  ");
	COUT << "test [pointer 8]" << endl;
	REQUIRE (pointer(8, "1000000001") == "        ^ ");
	COUT << "test [pointer 9]" << endl;
	REQUIRE (pointer(9, "1000000001") == "         ^");
	COUT << "test [pointer 10]" << endl;
	cout << "TEST pointer-test.cpp is done" << endl;
}
