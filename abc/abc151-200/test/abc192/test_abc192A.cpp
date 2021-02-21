#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc192A";

TEST(abc192A, case1) {
	check(COMMAND, string("") + "140", string("") + "60");
}

TEST(abc192A, case2) {
	check(COMMAND, string("") + "1000", string("") + "100");
}
