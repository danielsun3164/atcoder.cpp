#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc001A";

TEST(abc001A, case1) {
	check(COMMAND, string("") + "15\n" + "10", string("") + "5");
}

TEST(abc001A, case2) {
	check(COMMAND, string("") + "0\n" + "0", string("") + "0");
}

TEST(abc001A, case3) {
	check(COMMAND, string("") + "5\n" + "20", string("") + "-15");
}
