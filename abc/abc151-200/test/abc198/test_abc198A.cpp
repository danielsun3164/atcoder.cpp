#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc198A";

TEST(abc198A, case1) {
	check(COMMAND, string("") + "2", string("") + "1");
}

TEST(abc198A, case2) {
	check(COMMAND, string("") + "1", string("") + "0");
}

TEST(abc198A, case3) {
	check(COMMAND, string("") + "3", string("") + "2");
}
