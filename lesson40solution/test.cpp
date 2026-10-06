#include "test.h"


void test(int like, int day, string expected, string test_name) {
	string actual = calculate_likes(like, day);
	string msg = test_name + " --> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
 
}


void run_all_tests() {
	test(5, 4, "Day 1: 5 likes\n Day 2: 10 likes\n Day 3: 15 likes", "test_01");
	test(5, 4, "Day 1: 5 likes\n Day 2: 10 likes\n Day 3: 15 likes", "test_02");
	test(5, 4, "Day 1: 5 likes\n Day 2: 10 likes\n Day 3: 15 likes", "test_03");
	test(5, 4, "Day 1: 5 likes\n Day 2: 10 likes\n Day 3: 15 likes", "test_04");
	test(5, 4, "Day 1: 5 likes\n Day 2: 10 likes\n Day 3: 15 likes", "test_05");


}