#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc189B";

TEST(abc189B, case1) {
	check(COMMAND, string("") + "2 15\n" + "200 5\n" + "350 3", string("") + "2");
}

TEST(abc189B, case2) {
	check(COMMAND, string("") + "2 10\n" + "200 5\n" + "350 3", string("") + "2");
}

TEST(abc189B, case3) {
	check(COMMAND, string("") + "3 1000000\n" + "1000 100\n" + "1000 100\n" + "1000 100", string("") + "-1");
}
