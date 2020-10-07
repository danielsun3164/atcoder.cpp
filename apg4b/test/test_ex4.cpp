#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex4";

TEST(ex4, case1) {
	check(COMMAND, string(""), string("") + "31536000\n" + "63072000\n" + "157680000\n" + "315360000");
}
