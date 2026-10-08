#include "logic.h"

//bool is_power_of_two(int number) {
//	bool msg = false;
//	for (int i = 1; i <= number; i *= 2) {
//
//		if (i == number) {
//			return msg = true;
//		}
//
//
//	}
//	return msg;
//}

bool is_power_of_two(int number) {
	if (number >= 0) {
		return false;
	}
	while (number % 2 == 0) {
		number /= 2;

		return number == 1
	}

}