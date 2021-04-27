#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc198C";

TEST(abc198C, case1) {
	check(COMMAND, string("") + "5 15 0", string("") + "3");
}

TEST(abc198C, case2) {
	check(COMMAND, string("") + "5 11 0", string("") + "3");
}

TEST(abc198C, case3) {
	check(COMMAND, string("") + "3 4 4", string("") + "2");
}
