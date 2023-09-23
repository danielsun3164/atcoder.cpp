#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc201/D";
}

TEST(abc201_problemD, case1) {
	check(string("") + "3 3\n" + "---\n" + "+-+\n" + "+--", string("") + "Takahashi");
}

TEST(abc201_problemD, case2) {
	check(string("") + "2 4\n" + "+++-\n" + "-+-+", string("") + "Aoki");
}

TEST(abc201_problemD, case3) {
	check(string("") + "1 1\n" + "-", string("") + "Draw");
}
