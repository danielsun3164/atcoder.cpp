#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc004D";

TEST(abc004D, case1) {
	check(COMMAND, string("") + "2 3 4", string("") + "7");
}

TEST(abc004D, case2) {
	check(COMMAND, string("") + "17 2 34", string("") + "362");
}

TEST(abc004D, case3) {
	check(COMMAND, string("") + "267 294 165", string("") + "88577");
}
