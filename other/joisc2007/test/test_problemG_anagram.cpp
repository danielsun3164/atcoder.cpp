#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemG_anagram";

TEST(problemG, case1) {
	check(COMMAND, string("") + "HEART", string("") + "55");
}

TEST(problemG, case2) {
	check(COMMAND, string("") + "IOI", string("") + "2");
}
