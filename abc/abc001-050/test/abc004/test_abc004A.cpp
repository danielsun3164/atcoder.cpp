#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc004A";

TEST(abc004A, case1) {
	check(COMMAND, string("") + "1000", string("") + "2000");
}

TEST(abc004A, case2) {
	check(COMMAND, string("") + "1000000", string("") + "2000000");
}

TEST(abc004A, case3) {
	check(COMMAND, string("") + "0", string("") + "0");
}
