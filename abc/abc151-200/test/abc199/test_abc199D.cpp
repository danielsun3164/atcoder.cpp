#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc199D";

TEST(abc199D, case1) {
	check(COMMAND, string("") + "3 3\n" + "1 2\n" + "2 3\n" + "3 1", string("") + "6");
}

TEST(abc199D, case2) {
	check(COMMAND, string("") + "3 0", string("") + "27");
}

TEST(abc199D, case3) {
	check(COMMAND, string("") + "4 6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "2 4\n" + "1 3\n" + "1 4", string("") + "0");
}

TEST(abc199D, case4) {
	check(COMMAND, string("") + "20 0", string("") + "3486784401");
}
