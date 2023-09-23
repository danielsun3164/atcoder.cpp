#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "abc209/E";
}

TEST(abc209_problemE, case1) {
	check(string("") + "3\n" + "abcd\n" + "bcda\n" + "ada", string("") + "Aoki\n" + "Takahashi\n" + "Draw");
}

TEST(abc209_problemE, case2) {
	check(string("") + "1\n" + "ABC", string("") + "Draw");
}

TEST(abc209_problemE, case3) {
	check(string("") + "5\n" + "eaaaabaa\n" + "eaaaacaa\n" + "daaaaaaa\n" + "eaaaadaa\n" + "daaaafaa",
			string("") + "Takahashi\n" + "Takahashi\n" + "Takahashi\n" + "Aoki\n" + "Takahashi");
}
