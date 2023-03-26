#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc029_problemC, case1) {
	check(PATH + COMMAND, string("") + "1", string("") + "a\n" + "b\n" + "c");
}

TEST(abc029_problemC, case2) {
	check(PATH + COMMAND, string("") + "2",
			string("") + "aa\n" + "ab\n" + "ac\n" + "ba\n" + "bb\n" + "bc\n" + "ca\n" + "cb\n" + "cc");
}
