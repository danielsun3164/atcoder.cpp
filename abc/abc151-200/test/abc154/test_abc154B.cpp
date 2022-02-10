#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc154B";

TEST(abc154B, case1) {
	check(PATH + COMMAND, string("") + "sardine", string("") + "xxxxxxx");
}

TEST(abc154B, case2) {
	check(PATH + COMMAND, string("") + "xxxx", string("") + "xxxx");
}

TEST(abc154B, case3) {
	check(PATH + COMMAND, string("") + "gone", string("") + "xxxx");
}
