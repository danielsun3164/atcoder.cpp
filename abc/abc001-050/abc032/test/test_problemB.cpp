#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc032_problemB, case1) {
	check(string("") + "abcabc\n" + "2", string("") + "3");
}

TEST(abc032_problemB, case2) {
	check(string("") + "aaaaa\n" + "1", string("") + "1");
}

TEST(abc032_problemB, case3) {
	check(string("") + "hello\n" + "10", string("") + "0");
}
