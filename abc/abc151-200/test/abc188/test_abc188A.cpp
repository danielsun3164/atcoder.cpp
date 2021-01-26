#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc188A";

TEST(abc188A, case1) {
	check(COMMAND, string("") + "3 5", string("") + "Yes");
}

TEST(abc188A, case2) {
	check(COMMAND, string("") + "16 2", string("") + "No");
}

TEST(abc188A, case3) {
	check(COMMAND, string("") + "12 15", string("") + "No");
}
