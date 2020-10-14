#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemH";

TEST(problemH, case1) {
	check(COMMAND, string("") + "3 2\n" + "1 4\n" + "2 5\n" + "0 6", string("") + "Yes\n" + "4\n" + "2\n" + "0");
}

TEST(problemH, case2) {
	check(COMMAND, string("") + "3 3\n" + "1 4\n" + "2 5\n" + "0 6", string("") + "No");
}
