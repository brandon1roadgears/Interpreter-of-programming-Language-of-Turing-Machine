#include "head.h"
string border_check(string main_row, int point)
{
    if (point == (int)main_row.length())
        main_row.insert(main_row.end(), '_');
    else if (point == 0)
        main_row.insert(main_row.begin(), '_');
    return main_row;
}
