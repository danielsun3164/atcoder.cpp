#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex13";

TEST(ex13, case1) {
	check(COMMAND, string("") + "3\n" + "2 1 4", string("") + "0\n" + "1\n" + "2");
}

TEST(ex13, case2) {
	check(COMMAND, string("") + "2\n" + "80 70", string("") + "5\n" + "5");
}

TEST(ex13, case3) {
	check(COMMAND, string("") + "5\n" + "100 100 100 100 100", string("") + "0\n" + "0\n" + "0\n" + "0\n" + "0");
}

TEST(ex13, case4) {
	check(COMMAND, string("") + "10\n" + "53 21 99 83 75 40 33 62 18 100",
			string("") + "5\n" + "37\n" + "41\n" + "25\n" + "17\n" + "18\n" + "25\n" + "4\n" + "40\n" + "42");
}
