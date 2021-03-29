#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc194A";

TEST(abc194A, case1) {
	check(COMMAND, string("") + "10 8", string("") + "1");
}

TEST(abc194A, case2) {
	check(COMMAND, string("") + "1 2", string("") + "3");
}

TEST(abc194A, case3) {
	check(COMMAND, string("") + "0 0", string("") + "4");
}
