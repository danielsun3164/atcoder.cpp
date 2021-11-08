#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc201D";

TEST(abc201D, case1) {
	check(COMMAND, string("") + "3 3\n" + "---\n" + "+-+\n" + "+--", string("") + "Takahashi");
}

TEST(abc201D, case2) {
	check(COMMAND, string("") + "2 4\n" + "+++-\n" + "-+-+", string("") + "Aoki");
}

TEST(abc201D, case3) {
	check(COMMAND, string("") + "1 1\n" + "-", string("") + "Draw");
}
