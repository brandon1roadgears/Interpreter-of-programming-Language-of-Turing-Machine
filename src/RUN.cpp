#include "head.h"
extern void MOVE(action* rules, int j);
void RUN(action* rules, int end)
{
    for (int i = 0; i <= end; i++) {
        MOVE(rules, i);
    }
}
