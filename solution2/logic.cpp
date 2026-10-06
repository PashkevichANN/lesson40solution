#include "logic.h"

string write_numbers(int n, int m) {

	if (n > m) {
		int a = n;
		n = m;
		m = a;
	}

	if (n == m and m % 2 == 0)
	{
		return "";
	}

	if (m % 2 == 0) {
		m--;
	}

	string result = to_string(m);


	for (int i = m - 2; i >= n; i -= 2) {
		result += " " + to_string(i);
	}

	return result;
}
