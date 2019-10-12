#include "head.h"
void pointer(int point, string row)
{
    string p = row;
    for (auto& i : p) {
        i = ' ';
    }
    p[point] = '^';
    cout << p << endl;
}
