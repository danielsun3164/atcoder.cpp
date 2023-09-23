#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc009_problemC, case1) {
	check(string("") + "3 2\n" + "abc", string("") + "abc");
}

TEST(abc009_problemC, case2) {
	check(string("") + "7 2\n" + "atcoder", string("") + "actoder");
}

TEST(abc009_problemC, case3) {
	check(string("") + "7 7\n" + "atcoder", string("") + "acdeort");
}

TEST(abc009_problemC, case4) {
	check(string("") + "10 3\n" + "helloworld", string("") + "dehloworll");
}
