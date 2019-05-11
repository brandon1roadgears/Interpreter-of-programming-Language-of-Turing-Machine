#include "turing-test-head.h"
boll check_error(vector <action> &rules,string_state, string exp_symbol, string new_symb, string move, string next_state)
{
	if(state.length() > 10)
    		return 0;

	if(exp_symbol.length() > 1)
	  	return 0;

  	if(new_symb.length() > 1)
		return 0;

	if(move.length() > 1)
		return 0;

	if(next_state.length() > 10)
		return 0;

  return 1;
}
