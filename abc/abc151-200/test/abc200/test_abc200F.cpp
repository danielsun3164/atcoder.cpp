#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc200F";

TEST(abc200F, case1) {
	check(COMMAND, string("") + "101\n" + "2", string("") + "2");
}

TEST(abc200F, case2) {
	check(COMMAND, string("") + "?0?\n" + "1", string("") + "3");
}

TEST(abc200F, case3) {
	check(COMMAND, string("") + "10111?10??1101??1?00?1?01??00010?0?1??\n" + "998244353", string("") + "235562598");
}

TEST(abc200F, case4) {
	check(COMMAND, string("") + "?\n" + "1", string("") + "0");
}
