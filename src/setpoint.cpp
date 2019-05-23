#include "head.h"
int setpoint(string main_row)
{
    int i = 0;
    while (main_row[i] == '_')
        ++i;
    cout << "POINT = " << i << endl;
    return i;
}
