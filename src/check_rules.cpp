#include "head.h"
void check_rules(vector<action> &rules, int i)
{
	if (i > 0)
	{
		if (rules[i].state != rules[i-1].next_state)
		{
			cout << "States not comporable!!!";
			exit(1);
		}
	}
}
