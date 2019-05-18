#include "head.h"
extern int check_error(vector<action>& rules);
extern void RUN(vector<action>& rules, string main_row);
void input_rules(vector <action> &rules, string main_row)
{
  action element;
	int i = 0,fl;
	ifstream fle("text.txt");
	while (!fle.eof())
	{
		rules.push_back(element);
		fle >> rules[i].state;
		fle >> rules[i].exp_symbol;
		fle >> rules[i].new_symb;
		fle >> rules[i].move;
		fle >> rules[i].next_state;
		i++;
	}
	fl = check_error(rules);

	if (fl)
		RUN(rules, main_row);
	else
		{
			cout << "!ERROR!";
			return;
		}
}
