#include "turing-test-head.h"
string do_s(vector <action> &rules, string main_row, int i, int point)
{
	main_row[point] = rules[i].new_symb[0];
	return main_row;
}
TEST_CASE("DO_s-test", "[DO_S-test]"){
	std::vector <action> rules;
	rules.resize(1);
	rules[0].state = "00"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
	std::string main_row = "1100111001";
	REQUIRE(do_s(rules, main_row, 0, 5) == "1100101001");
	cout << "test [do_s 1] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "5"; rules[0].new_symb = "_"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "________5________";
	REQUIRE(do_s(rules, main_row, 0, 8) == "_________________");
	cout << "test [do_s 2] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "0"; rules[0].new_symb = "!"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "!!!!!!!!!!!!!!!!!!!!!0";
	REQUIRE(do_s(rules, main_row, 0, 21) == "!!!!!!!!!!!!!!!!!!!!!!");
	cout << "test [do_s 3] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "F"; rules[0].new_symb = "f"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "qazxswedcvFrtgbnhyujm";
	REQUIRE(do_s(rules, main_row, 0, 10) == "qazxswedcvfrtgbnhyujm");
	cout << "test [do_s 4] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "."; rules[0].new_symb = ","; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "1.12312312312";
	REQUIRE(do_s(rules, main_row, 0, 1) == "1,12312312312");
	cout << "test [do_s 5] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "_"; rules[0].new_symb = "r"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "Hello_use_";
	REQUIRE(do_s(rules, main_row, 0, 9) == "Hello_user");
	cout << "test [do_s 6] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "s"; rules[0].new_symb = "A"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "AAAAAAAAAAAAAAAsAAAAAAAAAAAAA";
	REQUIRE(do_s(rules, main_row, 0, 15) == "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
	cout << "test [do_s 7] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "9"; rules[0].new_symb = "8"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "123123124314135438570189";
	REQUIRE(do_s(rules, main_row, 0, 23) == "123123124314135438570188");
	cout << "test [do_s 8] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "_"; rules[0].new_symb = "-"; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "328_823";
	REQUIRE(do_s(rules, main_row, 0, 3) == "328-823");
	cout << "test [do_s 9] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "_"; rules[0].new_symb = "("; rules[0].move = "r"; rules[0].next_state = "halt";
	main_row = "_32+65)";
	REQUIRE(do_s(rules, main_row, 0, 0) == "(32+65)");
	cout << "test [do_s 10] successful" << endl;

	cout << "TEST do_s-test.cpp is done" << endl;
}
