#include "turing-test-head.h"
int point (int point, string move)
{
  	if (move == "r")
		point++;
	if (move == "l")
		point--;
	if (move == "n")
		point = point;
	return point;
}

TEST_CASE("test MOVE", "[TEST]"){
  REQUIRE(point(1,"r") == 2);
  REQUIRE(point(4,"l") == 3);
  REQUIRE(point(9,"r") == 10);
  REQUIRE(point(101,"l") == 100);
  REQUIRE(point(87,"n") == 87);
  REQUIRE(point(11,"r") == 12);
  REQUIRE(point(15,"l") == 14);
  REQUIRE(point(1,"l") == 0);
  REQUIRE(point(65,"r") == 66);
  REQUIRE(point(13,"n") == 13);
  REQUIRE(point(10,"r") == 11);
  REQUIRE(point(11,"r") == 12);
  REQUIRE(point(12,"r") == 13);
  REQUIRE(point(13,"r") == 14);
  REQUIRE(point(14,"r") == 15);
  REQUIRE(point(15,"r") == 16);
  REQUIRE(point(16,"r") == 17);
  REQUIRE(point(17,"r") == 18);
  REQUIRE(point(18,"r") == 19);
  REQUIRE(point(19,"r") == 20);
  REQUIRE(point(221,"r") == 222);
  REQUIRE(point(95,"l") == 94);
  cout << endl <<"TEST PRINTSTRING.cpp is done" << endl;
}

