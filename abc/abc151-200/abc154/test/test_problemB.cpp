#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC154/B";
}

TEST(abc154_problemB, case1) {
	check(string("") + "sardine", string("") + "xxxxxxx");
}

TEST(abc154_problemB, case2) {
	check(string("") + "xxxx", string("") + "xxxx");
}

TEST(abc154_problemB, case3) {
	check(string("") + "gone", string("") + "xxxx");
}
