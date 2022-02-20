#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "ch@ku@ai\n" + "choku@@i", string("") + "You can win");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "aoki\n" + "@ok@", string("") + "You will lose");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "arc\n" + "abc", string("") + "You will lose");
}
