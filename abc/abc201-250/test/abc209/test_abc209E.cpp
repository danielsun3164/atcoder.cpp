#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc209E";

TEST(abc209E, case1) {
	check(COMMAND, string("") + "3\n" + "abcd\n" + "bcda\n" + "ada", string("") + "Aoki\n" + "Takahashi\n" + "Draw");
}

TEST(abc209E, case2) {
	check(COMMAND, string("") + "1\n" + "ABC", string("") + "Draw");
}

TEST(abc209E, case3) {
	check(COMMAND, string("") + "5\n" + "eaaaabaa\n" + "eaaaacaa\n" + "daaaaaaa\n" + "eaaaadaa\n" + "daaaafaa",
			string("") + "Takahashi\n" + "Takahashi\n" + "Takahashi\n" + "Aoki\n" + "Takahashi");
}
