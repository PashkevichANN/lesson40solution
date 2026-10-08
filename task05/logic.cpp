#include "logic.h"

bool is_digit_count_even(long long number) {
	if (number < 0) {
		number *= -1;
	}
	int count = 0;

	while (number > 0) {
		count++;
		number /= 10;
	}


	return count != 0 and count % 2 == 0;
}