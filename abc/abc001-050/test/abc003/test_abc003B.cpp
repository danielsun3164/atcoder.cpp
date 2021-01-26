#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc003B";

TEST(abc003B, case1) {
	check(COMMAND, string("") + "ch@ku@ai\n" + "choku@@i", string("") + "You can win");
}

TEST(abc003B, case2) {
	check(COMMAND, string("") + "aoki\n" + "@ok@", string("") + "You will lose");
}

TEST(abc003B, case3) {
	check(COMMAND, string("") + "arc\n" + "abc", string("") + "You will lose");
}
