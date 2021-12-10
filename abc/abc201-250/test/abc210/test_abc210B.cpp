#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc210B";

TEST(abc210B, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "00101", string("") + "Takahashi");
}

TEST(abc210B, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "010", string("") + "Aoki");
}
