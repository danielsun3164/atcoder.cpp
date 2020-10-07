#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex2";

TEST(ex2, case1) {
	check(COMMAND, string(""), string("") + "いつも2525\n" + "AtCoderくん");
}
