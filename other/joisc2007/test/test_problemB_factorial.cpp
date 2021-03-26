#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemB_factorial";

TEST(problemB, case1) {
	check(COMMAND, string("") + "10", string("") + "5");
}

TEST(problemB, case2) {
	check(COMMAND, string("") + "12", string("") + "4");
}
