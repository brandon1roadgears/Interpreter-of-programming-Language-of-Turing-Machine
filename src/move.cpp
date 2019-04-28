#include "head.h"
int move(int point, vector<action>& rules, int i)
{
    if (rules[i].move == "r")
        point++;
    if (rules[i].move == "l")
        point--;
    if (rules[i].move == "n")
        point = point;
    return point;
}
