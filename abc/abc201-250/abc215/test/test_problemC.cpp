#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc215/C";
}

TEST(abc215_problemC, case1) {
	check(string("") + "aab 2", string("") + "aba");
}

TEST(abc215_problemC, case2) {
	check(string("") + "baba 4", string("") + "baab");
}

TEST(abc215_problemC, case3) {
	check(string("") + "ydxwacbz 40320", string("") + "zyxwdcba");
}
