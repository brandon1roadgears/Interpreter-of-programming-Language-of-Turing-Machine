#include "head.h"
void RUN(action* rules, int end)
{
    for (int i = 0; i <= end; i++) {
        MOVE(rules, i);
    }
}

