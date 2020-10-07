#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemE";

TEST(problemE, case1) {
	check(COMMAND, string("") + "2 1 0 5", string("") + "0.50000");
}

TEST(problemE, case2) {
	check(COMMAND, string("") + "3 1 1 3", string("") + "0.833");
}

TEST(problemE, case3) {
	check(COMMAND, string("") + "2 2 1 3", string("") + "1.000");
}
