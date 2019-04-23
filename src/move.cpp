#include "head.h"
void MOVE(action* rules, int j)
{
    main_row[point] = '1';
    printstring();
    if (rules[j].move == "l") {
        point--;
    }
    if (rules[j].move == "r") {
        point++;
    }
    if (rules[j].move == "n") {
        point = point;
    }
    main_row[point] = '1';
}
