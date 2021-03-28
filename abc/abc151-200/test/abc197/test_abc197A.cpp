#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc197A";

TEST(abc197A, case1) {
	check(COMMAND, string("") + "abc", string("") + "bca");
}

TEST(abc197A, case2) {
	check(COMMAND, string("") + "aab", string("") + "aba");
}
