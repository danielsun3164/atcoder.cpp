#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc002B";

TEST(abc002B, case1) {
	check(COMMAND, string("") + "chokudai", string("") + "chkd");
}

TEST(abc002B, case2) {
	check(COMMAND, string("") + "okanemochi", string("") + "knmch");
}

TEST(abc002B, case3) {
	check(COMMAND, string("") + "aoki", string("") + "k");
}

TEST(abc002B, case4) {
	check(COMMAND, string("") + "mazushii", string("") + "mzsh");
}
