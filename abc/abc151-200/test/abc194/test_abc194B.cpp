#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc194B";

TEST(abc194B, case1) {
	check(COMMAND, string("") + "3\n" + "8 5\n" + "4 4\n" + "7 9", string("") + "5");
}

TEST(abc194B, case2) {
	check(COMMAND, string("") + "3\n" + "11 7\n" + "3 2\n" + "6 7", string("") + "5");
}
