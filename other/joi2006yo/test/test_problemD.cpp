#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemD";

TEST(problemD, case1) {
	check(COMMAND, string("") + "3 10\n" + "0\n" + "1 1\n" + "2 2 3", string("") + "9");
}

TEST(problemD, case2) {
	check(COMMAND, string("") + "4 20\n" + "2 1 2\n" + "1 3\n" + "1 4", string("") + "3");
}

TEST(problemD, case3) {
	check(COMMAND, string("") + "2 5\n" + "2 1 2\n" + "0\n" + "0", string("") + "0");
}

TEST(problemD, case4) {
	check(COMMAND, string("") + "3 3\n" + "0\n" + "1 1\n" + "2 2 3", string("") + "-1");
}
