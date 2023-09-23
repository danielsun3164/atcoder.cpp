#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc029_problemC, case1) {
	check(string("") + "1", string("") + "a\n" + "b\n" + "c");
}

TEST(abc029_problemC, case2) {
	check(string("") + "2", string("") + "aa\n" + "ab\n" + "ac\n" + "ba\n" + "bb\n" + "bc\n" + "ca\n" + "cb\n" + "cc");
}
