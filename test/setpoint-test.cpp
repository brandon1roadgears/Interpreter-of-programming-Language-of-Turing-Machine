#include "turing-test-head.h"
int setpoint(string main_row)
{
    int i = 0;
    while (main_row[i] == '_')
        ++i;
    cout << "POINT = " << i << endl;
    return i;
}

TEST_CASE("Setpoint-test", "[TEST]")
{
    string main_row = "10010010010010001";
    REQUIRE(setpoint(string main_row) == 0);
    cout << "test [setpoint 1] successful" << endl;

    main_row = "_10010010010010001";
    REQUIRE(setpoint(string main_row) == 1);
    cout << "test [setpoint 2] successful" << endl;

    main_row = "__10010010010010001";
    REQUIRE(setpoint(string main_row) == 2);
    cout << "test [setpoint 3] successful" << endl;

    main_row = "___10010010010010001";
    REQUIRE(setpoint(string main_row) == 3);
    cout << "test [setpoint 4] successful" << endl;

    main_row = "____10010010010010001";
    REQUIRE(setpoint(string main_row) == 4);
    cout << "test [setpoint 5] successful" << endl;

    main_row = "_____10010010010010001";
    REQUIRE(setpoint(string main_row) == 5);
    cout << "test [setpoint 6] successful" << endl;

    main_row = "______10010010010010001";
    REQUIRE(setpoint(string main_row) == 6);
    cout << "test [setpoint 7] successful" << endl;

    main_row = "_______10010010010010001";
    REQUIRE(setpoint(string main_row) == 7);
    cout << "test [setpoint 8] successful" << endl;

    main_row = "________10010010010010001";
    REQUIRE(setpoint(string main_row) == 8);
    cout << "test [setpoint 9] successful" << endl;

    main_row = "_________10010010010010001";
    REQUIRE(setpoint(string main_row) == 9);
    cout << "test [setpoint 10] successful" << endl;
    cout << "TEST setpoint is done" << endl;
}
