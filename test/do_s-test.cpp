#include "turing-test-head.h"
string do_s(string main_row, int point, string exp_symb, string new_symb)
{
	if (main_row[point] == exp_symb[0])
	{
		main_row[point] = new_symb[0];
	}
	return main_row;
}
TEST_CASE("DO_s-test", "[DO_S-test]"){
	REQUIRE(do_s("101001010001", 2,"1","w") == "10w001010001");
	REQUIRE(do_s("qeqrrwtqyqyywt", 5,"w","3") == "qeqrr3tqyqyywt");
	REQUIRE(do_s("2929bcwykrbbr", 2,"2","s") == "29s9bcwykrbbr");
	REQUIRE(do_s("(!*!!!!!**!)", 6,"!","?") == "(!*!!!?!**!)");
	REQUIRE(do_s("[0][1][2][3][4][5][6][7]", 13,"4","0") == "[0][1][2][3][0][5][6][7]");
	REQUIRE(do_s("qazxswedcvdrtgqwe", 16,"e","9") == "qazxswedcvdrtgq9");
	REQUIRE(do_s("______5________", 6,"_","w") == "_______________");
	REQUIRE(do_s("113213123123123123123123113", 23,"3",".") == "11321312312312312312312.113");
	REQUIRE(do_s("3+2", 1,"+","-") == "3-2");
	REQUIRE(do_s("(456-325_", 8,"_",")") == "(456-325)");
	REQUIRE(do_s("(_)(1)(2)(3)(4)", 1,"_","0") == "(0)(1)(2)(3)(4)");
	cout << "TEST do_s-test.cpp is done";
}
