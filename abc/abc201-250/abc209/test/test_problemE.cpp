#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "abcd\n" + "bcda\n" + "ada", string("") + "Aoki\n" + "Takahashi\n" + "Draw");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "1\n" + "ABC", string("") + "Draw");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "eaaaabaa\n" + "eaaaacaa\n" + "daaaaaaa\n" + "eaaaadaa\n" + "daaaafaa",
			string("") + "Takahashi\n" + "Takahashi\n" + "Takahashi\n" + "Aoki\n" + "Takahashi");
}
