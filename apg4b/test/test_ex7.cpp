#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex7";

TEST(ex7, case1) {
	check(COMMAND, string(""), string("") + "AtCoder");
}
