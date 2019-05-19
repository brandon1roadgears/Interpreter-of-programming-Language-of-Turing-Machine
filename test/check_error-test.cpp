#include "turing-test-head.h"
bool check_error(vector <action> &rules)
{
	if (rules[0].state != "00")
	{
		cout << "Error in line = 1" << "state" << endl;
		cout << "Name of first state must be 00 !!!" << endl;
		return 0;
	}
	for (long unsigned int i = 0; i < tules.size() - 1; i++)
	{
		if (rules[i].state.length() > 10)
		{
			cout << "Error in line = " << i+1 <<" in state!!! " << endl;
			return 0;
		}
		if (rules[i].exp_symbol.length() > 1)
		{
			cout << "Error in line = " << i+1 <<" in exp_symbol!!! " << endl;
			return 0;
		}
		if (rules[i].new_symb.length() > 1)
		{
			cout << "Error in line = " << i+1 <<" in new_symb!!! " << endl;
			return 0;
		}
		if (rules[i].move.length() > 1)
		{
			cout << "Error in line = " << i+1 <<" in move!!! " << endl;
			return 0;
		}
		if (rules[i].next_state.length() > 10)
		{
			cout << "Error in line = " << i+1 <<" in next_state!!! " << endl;
			return 0;
		}
	}
	return 1;
}

TEST_CASE("Check error test:", "[Checkerrortest]"){
  REQUIRE(check_error("00","1","0","r","01") == 1);
  REQUIRE(check_error("first","q","w","n","second") == 1);
  REQUIRE(check_error("32","y","1","l","64") == 1);
  REQUIRE(check_error("find1","1","a","r","##") == 1);
  REQUIRE(check_error("hello"," ","+","l","world") == 1);
  REQUIRE(check_error("currentstate","1","0","r","25") == 0);
  REQUIRE(check_error("00","1","00","r","01") == 0);
  REQUIRE(check_error("00","qq","w","l","24") == 0);
  REQUIRE(check_error("25","z","s","rr","12") == 0);
  REQUIRE(check_error("q","w","e","r","nexststate12") == 0);
  cout << endl <<"TEST check_error is done" << endl;
}
