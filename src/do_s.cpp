#include "head.h"
string do_s(vector<action>& rules, string main_row, int i, int point)
{
    main_row[point] = rules[i].new_symb[0];
    return main_row;
}
