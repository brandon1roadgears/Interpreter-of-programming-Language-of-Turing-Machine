#include "turing-test-head.h"
bool check_error(vector <action> &rules)
{
	if (rules[0].state != "00")
		return 0;
	for (long unsigned int i = 0; i < rules.size(); i++)
	{
		if (rules[i].state.length() > 10)
			return 0;

		if (rules[i].exp_symbol.length() > 1)
			return 0;

		if (rules[i].new_symb.length() > 1)
			return 0;

		if (rules[i].move.length() > 1)
			return 0;

		if (rules[i].next_state.length() > 10)
			return 0;
	}
	return 1;
}

TEST_CASE("Check error test:", "[Checkerrortest]"){
  std::vector <action> rules;
	rules.resize(1);
	rules[0].state = "00"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
	REQUIRE(check_error(rules) == 1);
	cout << "test [check_error 1] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "W"; rules[0].new_symb = "!"; rules[0].move = "r"; rules[0].next_state = "qwe";
	REQUIRE(check_error(rules) == 1);
  cout << "test [check_error 2] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "_"; rules[0].new_symb = "#"; rules[0].move = "n"; rules[0].next_state = "next";
	REQUIRE(check_error(rules) == 1);
  cout << "test [check_error 3] successful" << endl;

	rules.resize(3);
	rules[0].state = "00"; rules[0].exp_symbol = "q"; rules[0].new_symb = "w"; rules[0].move = "r"; rules[0].next_state = "123456789";
	rules[1].state = "123456789"; rules[1].exp_symbol = "w"; rules[1].new_symb = "q"; rules[1].move = "r"; rules[1].next_state = "prehalt";
	rules[2].state = "prehalt"; rules[2].exp_symbol = "_"; rules[2].new_symb = ")"; rules[2].move = "n"; rules[2].next_state = "halt";
	REQUIRE(check_error(rules) == 1);
	cout << "test [check_error 4] successful" << endl;

	rules.resize(10);
	rules[0].state = "00"; rules[0].exp_symbol = "1"; rules[0].new_symb = "1"; rules[0].move = "r"; rules[0].next_state = "next1";
	rules[1].state = "next1"; rules[1].exp_symbol = "2"; rules[1].new_symb = "2"; rules[1].move = "r"; rules[1].next_state = "next2";
	rules[2].state = "next2"; rules[2].exp_symbol = "3"; rules[2].new_symb = "3"; rules[2].move = "r"; rules[2].next_state = "next3";
	rules[3].state = "next3"; rules[3].exp_symbol = "4"; rules[3].new_symb = "w"; rules[3].move = "r"; rules[3].next_state = "next4";
	rules[4].state = "next4"; rules[4].exp_symbol = "5"; rules[4].new_symb = "q"; rules[4].move = "r"; rules[4].next_state = "next5";
	rules[5].state = "next5"; rules[5].exp_symbol = "6"; rules[5].new_symb = ")"; rules[5].move = "r"; rules[5].next_state = "next6";
	rules[6].state = "next6"; rules[6].exp_symbol = "7"; rules[6].new_symb = "w"; rules[6].move = "r"; rules[6].next_state = "next7";
	rules[7].state = "next7"; rules[7].exp_symbol = "8"; rules[7].new_symb = "q"; rules[7].move = "r"; rules[7].next_state = "next8";
	rules[8].state = "next8"; rules[8].exp_symbol = "9"; rules[8].new_symb = ")"; rules[8].move = "r"; rules[8].next_state = "next9";
	rules[9].state = "next9"; rules[9].exp_symbol = "_"; rules[9].new_symb = "]"; rules[9].move = "n"; rules[9].next_state = "halt";
	REQUIRE(check_error(rules) == 1);
	cout << "test [check_error 5] successful" << endl;


	rules.resize(1);
	rules[0].state = "11"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
	REQUIRE(check_error(rules) == 0);
	cout << "test [check_error 6] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "Ww"; rules[0].new_symb = "!"; rules[0].move = "r"; rules[0].next_state = "qwe";
	REQUIRE(check_error(rules) == 0);
  cout << "test [check_error 7] successful" << endl;

	rules[0].state = "00"; rules[0].exp_symbol = "_"; rules[0].new_symb = "#"; rules[0].move = "left"; rules[0].next_state = "next";
	REQUIRE(check_error(rules) == 0);
  cout << "test [check_error 8] successful" << endl;

	rules.resize(3);
	rules[0].state = "00"; rules[0].exp_symbol = "q"; rules[0].new_symb = "w"; rules[0].move = "r"; rules[0].next_state = "1234567891011";
	rules[1].state = "1234567891011"; rules[1].exp_symbol = "w"; rules[1].new_symb = "q"; rules[1].move = "r"; rules[1].next_state = "prehalt";
	rules[2].state = "prehalt"; rules[2].exp_symbol = "_"; rules[2].new_symb = ")"; rules[2].move = "n"; rules[2].next_state = "halt";
	REQUIRE(check_error(rules) == 0);
	cout << "test [check_error 9] successful" << endl;

	rules.resize(10);
	rules[0].state = "00"; rules[0].exp_symbol = "1"; rules[0].new_symb = "1"; rules[0].move = "r"; rules[0].next_state = "next1";
	rules[1].state = "next1"; rules[1].exp_symbol = "2"; rules[1].new_symb = "2"; rules[1].move = "r"; rules[1].next_state = "next2";
	rules[2].state = "next2"; rules[2].exp_symbol = "3"; rules[2].new_symb = "3"; rules[2].move = "r"; rules[2].next_state = "next3";
	rules[3].state = "next3"; rules[3].exp_symbol = "4"; rules[3].new_symb = "w"; rules[3].move = "r"; rules[3].next_state = "next4";
	rules[4].state = "next4"; rules[4].exp_symbol = "5"; rules[4].new_symb = "q"; rules[4].move = "r"; rules[4].next_state = "next5";
	rules[5].state = "next5"; rules[5].exp_symbol = "6"; rules[5].new_symb = ")"; rules[5].move = "r"; rules[5].next_state = "next6";
	rules[6].state = "next6"; rules[6].exp_symbol = "7"; rules[6].new_symb = "w"; rules[6].move = "r"; rules[6].next_state = "next7";
	rules[7].state = "next7"; rules[7].exp_symbol = "8"; rules[7].new_symb = "q"; rules[7].move = "r"; rules[7].next_state = "next8";
	rules[8].state = "next8"; rules[8].exp_symbol = "9"; rules[8].new_symb = "()"; rules[8].move = "r"; rules[8].next_state = "next9";
	rules[9].state = "next9"; rules[9].exp_symbol = "_"; rules[9].new_symb = "]"; rules[9].move = "n"; rules[9].next_state = "halt";
	REQUIRE(check_error(rules) == 0);
	cout << "test [check_error 10] successful" << endl;
}
