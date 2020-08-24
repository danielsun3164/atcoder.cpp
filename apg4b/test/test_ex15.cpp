#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex15";

TEST(ex15, case1) {
	check(COMMAND, string("") + "2\n" + "5 7\n" + "4 10\n" + "9 2", string("") + "1848");
}

TEST(ex15, case2) {
	check(COMMAND, string("") + "3\n" + "100 100 100\n" + "100 100 100\n" + "100 100 100", string("") + "27000000");
}

TEST(ex15, case3) {
	check(COMMAND, string("") + "5\n" + "95 20 74 81 10\n" + "100 50 32 84 31\n" + "0 0 0 0 0", string("") + "0");
}

TEST(ex15, case4) {
	check(COMMAND, string("") + "2\n" + "10 0\n" + "0 5\n" + "1 1", string("") + "100");
}
