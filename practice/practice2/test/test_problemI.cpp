#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemI";

TEST(problemI, case1) {
	check(COMMAND, string("") + "abcbcba", string("") + "21");
}

TEST(problemI, case2) {
	check(COMMAND, string("") + "mississippi", string("") + "53");
}

TEST(problemI, case3) {
	check(COMMAND, string("") + "ababacaca", string("") + "33");
}

TEST(problemI, case4) {
	check(COMMAND, string("") + "aaaaa", string("") + "5");
}
