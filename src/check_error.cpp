#include "head.h"
int check_error(vector <action> &rules)
{
	if (rules[0].state != "00")
	{
		cout << "Name of first state must be 00!!!" << endl;
		return 0; //             <<----------------------------
	}
	for(long unsigned int i = 0; i < rules.size() - 1; i++)
	{
		if(rules[i].state.length() > 10)
		{
			cout << "Error in line = " << i + 1 << " in state!!! " << endl;
			return 0;
		}
		if(rules[i].exp_symbol.length() > 1)
		{
			cout << "Error in line = " << i + 1 << " in expected_symbol!!! " << endl;
			return 0;
		}
		if(rules[i].new_symb.length() > 1)
		{
			cout << "Error in line = " << i + 1 << " in new symbol!!! " << endl;
			return 0;
		}
		if(rules[i].move.length() > 1)
		{
			cout << "Error in line = " << i + 1 << " in move!!! " << endl;
			return 0;
		}
		if(rules[i].next_state.length() > 10)
		{
			cout << "Error in line = " << i + 1 << " in next state!!!" << endl;
			return 0;
		}
	}
	return 1;
}
