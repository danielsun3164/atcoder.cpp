#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC164/B";
}

TEST(abc164_problemB, case1) {
	check(string("") + "10 9 10 10", string("") + "No");
}

TEST(abc164_problemB, case2) {
	check(string("") + "46 4 40 5", string("") + "Yes");
}
