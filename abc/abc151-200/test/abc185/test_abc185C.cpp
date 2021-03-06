#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc185C";

TEST(abc185C, case1) {
	check(COMMAND, string("") + "12", string("") + "1");
}

TEST(abc185C, case2) {
	check(COMMAND, string("") + "13", string("") + "12");
}

TEST(abc185C, case3) {
	check(COMMAND, string("") + "17", string("") + "4368");
}
