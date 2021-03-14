#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc195A";

TEST(abc195A, case1) {
	check(COMMAND, string("") + "10 120", string("") + "Yes");
}

TEST(abc195A, case2) {
	check(COMMAND, string("") + "10 125", string("") + "No");
}
