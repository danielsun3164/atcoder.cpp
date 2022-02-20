#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "---\n" + "+-+\n" + "+--", string("") + "Takahashi");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "2 4\n" + "+++-\n" + "-+-+", string("") + "Aoki");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "1 1\n" + "-", string("") + "Draw");
}
