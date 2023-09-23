#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc003_problemB, case1) {
	check(string("") + "ch@ku@ai\n" + "choku@@i", string("") + "You can win");
}

TEST(abc003_problemB, case2) {
	check(string("") + "aoki\n" + "@ok@", string("") + "You will lose");
}

TEST(abc003_problemB, case3) {
	check(string("") + "arc\n" + "abc", string("") + "You will lose");
}
