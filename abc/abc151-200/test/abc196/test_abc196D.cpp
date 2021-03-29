#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc196D";

TEST(abc196D, case1) {
	check(COMMAND, string("") + "2 2 1 2", string("") + "4");
}

TEST(abc196D, case2) {
	check(COMMAND, string("") + "3 3 4 1", string("") + "18");
}

TEST(abc196D, case3) {
	check(COMMAND, string("") + "4 4 8 0", string("") + "36");
}
