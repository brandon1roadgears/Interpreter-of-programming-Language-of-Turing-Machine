#include "head.h"
int setpoint(string main_row)
{
    int i = 0;
    while (main_row[i] == '_')
        ++i;
    return i;
}
