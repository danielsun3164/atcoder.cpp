#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc187A";

TEST(abc187A, case1) {
	check(COMMAND, string("") + "123 234", string("") + "9");
}

TEST(abc187A, case2) {
	check(COMMAND, string("") + "593 953", string("") + "17");
}

TEST(abc187A, case3) {
	check(COMMAND, string("") + "100 999", string("") + "27");
}
