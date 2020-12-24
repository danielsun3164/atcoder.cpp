#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc186A";

TEST(abc186A, case1) {
	check(COMMAND, string("") + "10 3", string("") + "3");
}

TEST(abc186A, case2) {
	check(COMMAND, string("") + "1000 1", string("") + "1000");
}
