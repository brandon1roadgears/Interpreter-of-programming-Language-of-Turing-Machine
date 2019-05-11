#include "head.h"
extern string input_main_row(string main_row);
extern void input_rules(vector<action>& rules, string main_row, int point);
int main()
{
    int point = 0;
    string main_row;
    vector<action> rules(10000);
    main_row = input_main_row(main_row);
    input_rules(rules, main_row, point);
    return 0;
}
