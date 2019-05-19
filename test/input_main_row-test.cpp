#include "turing-test-head.h"
string input_main_row(string main_row)
{
  ifstream str("string-test.txt");
  getline(str, main_row);
  return main_row;
  str.close();
}
TEST_CASE("input_main_row", "[TEST]")
{
  std::string main_row = "1010010010100101000101";
  ofstream s("string-test.txt")
  main_row >> s;
  REQUIRE(input_main_row(main_row));
  s.close();
}
