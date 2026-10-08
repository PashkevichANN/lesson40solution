#include "logic.h"

string get_number_order(int n, int m) {
	string result = to_string(n);

	int d = n < m ? 1 : -1;
	
	/*	for (int i = n + d; d > 0 ? i <= m : i>= m ; i++) {
			result += " " + to_string(i);
		}*/
	
		int count = abs(m - n) + 1;
		for (int i = 1; i < count; i++) {
			result += " " + to_string(n + i * d);
		}

	return result;
}