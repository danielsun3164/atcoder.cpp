#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc201/C";
}

TEST(abc201_problemC, case1) {
	check(string("") + "ooo???xxxx", string("") + "108");
}

TEST(abc201_problemC, case2) {
	check(string("") + "o?oo?oxoxo", string("") + "0");
}

TEST(abc201_problemC, case3) {
	check(string("") + "xxxxx?xxxo", string("") + "15");
}
