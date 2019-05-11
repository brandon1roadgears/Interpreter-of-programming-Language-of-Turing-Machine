#include "turing-test-head.h"
int point (int point, string move)
{
  	if (move == "r")
		point++;
	if (move == "l")
		point--;
	if (move == "n")
		point = point;
	return point;
}

