#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc185E";

TEST(abc185E, case1) {
	check(COMMAND, string("") + "4 3\n" + "1 2 1 3\n" + "1 3 1", string("") + "2");
}

TEST(abc185E, case2) {
	check(COMMAND, string("") + "4 6\n" + "1 3 2 4\n" + "1 5 2 6 4 3", string("") + "3");
}

TEST(abc185E, case3) {
	check(COMMAND, string("") + "5 5\n" + "1 1 1 1 1\n" + "2 2 2 2 2", string("") + "5");
}
