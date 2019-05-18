#include "head.h"
void pointer (int point, string row)
{
	string p = row;
	for (long unsigned int i = 0; i < row.length(); ++i)
		p[i] = ' ';
	p[point] = '^';
	cout << p << endl;
}
