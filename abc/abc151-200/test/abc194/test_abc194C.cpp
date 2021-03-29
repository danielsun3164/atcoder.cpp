#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc194C";

TEST(abc194C, case1) {
	check(COMMAND, string("") + "3\n" + "2 8 4", string("") + "56");
}

TEST(abc194C, case2) {
	check(COMMAND, string("") + "5\n" + "-5 8 9 -4 -3", string("") + "950");
}
