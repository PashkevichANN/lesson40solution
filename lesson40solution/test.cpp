#include "test.h"


void test(int like, int day, string expected, string test_name) {
	string actual = calculate_likes(like, day);
	string msg = test_name + " --> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
 
}


void run_all_tests() {
	test(5, 4, "Day 1: 5 likes\n Day 2: 10 likes\n Day 3: 15 likes\n Day 4: 20 likes\n", "test_01");
	test(100, 1, "Day 1: 100 likes\n Day 2: 100 likes\n", "test_02");
	test(0, 2, "Day 1: 0 likes\n Day 2: 0 likes\n", "test_03");
	test(-1, 4, "ERROR! Some data was entered incorrectly", "test_04");
	test(10, 0, "ERROR! Some data was entered incorrectly", "test_05");


}