#include "turing-test-head.h"
std::string input_main_row(std::string main_row)
{
    ifstream str("string-test.txt");
    getline(str, main_row);
    str.close();
    return main_row;
}
TEST_CASE("input_main_row", "[TEST]")
{
    std::string ret;
    std::string main_row = "110099999999";
    std::ofstream s("string-test.txt");
    s << main_row;
    s.close();
    REQUIRE(input_main_row(ret) == "110099999999");
    cout << "test [input_main_row 1] succesful" << endl;

    main_row = "128-111";
    s.open("string-test.txt");
    s << main_row;
    s.close();
    REQUIRE(input_main_row(ret) == "128-111");
    cout << "test [input_main_row 2] succesful" << endl;

    main_row = "hello_user";
    s.open("string-test.txt");
    s << main_row;
    s.close();
    REQUIRE(input_main_row(ret) == "hello_user");
    cout << "test [input_main_row 3] succesful" << endl;

    main_row = "________________1_____________";
    s.open("string-test.txt");
    s << main_row;
    s.close();
    REQUIRE(input_main_row(ret) == "________________1_____________");
    cout << "test [input_main_row 4] succesful" << endl;

    main_row = "101002721739436407162470916501641634-1";
    s.open("string-test.txt");
    s << main_row;
    s.close();
    REQUIRE(input_main_row(ret) == "101002721739436407162470916501641634-1");
    cout << "test [input_main_row 5] succesful" << endl;

    main_row = "ItS_a_TuRiNg_MaChInE";
    s.open("string-test.txt");
    s << main_row;
    s.close();
    REQUIRE(input_main_row(ret) == "ItS_a_TuRiNg_MaChInE");
    cout << "test [input_main_row 6] succesful" << endl;
    cout << "TEST input_mainrow is done" << endl;
}

