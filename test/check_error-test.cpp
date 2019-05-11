#include "turing-test-head.h"
boll check_error(string_state, string exp_symbol, string new_symb, string move, string next_state)
{
	if(state.length() > 10)
    		return 0;

	if(exp_symbol.length() > 1)
	  	return 0;

  	if(new_symb.length() > 1)
		return 0;

	if(move.length() > 1)
		return 0;

	if(next_state.length() > 10)
		return 0;

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
