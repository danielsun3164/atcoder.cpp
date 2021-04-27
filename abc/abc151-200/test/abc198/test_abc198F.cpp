#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc198F";

TEST(abc198F, case1) {
	check(COMMAND, string("") + "8", string("") + "3");
}

TEST(abc198F, case2) {
	check(COMMAND, string("") + "9", string("") + "5");
}

TEST(abc198F, case3) {
	check(COMMAND, string("") + "50", string("") + "80132");
}

TEST(abc198F, case4) {
	check(COMMAND, string("") + "10000000000", string("") + "2239716");
}
