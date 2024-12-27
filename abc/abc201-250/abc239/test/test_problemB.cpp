#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc239/B";
}

TEST(abc239_problemB, case1) {
	check(string("") + "47", string("") + "4");
}

TEST(abc239_problemB, case2) {
	check(string("") + "-24", string("") + "-3");
}

TEST(abc239_problemB, case3) {
	check(string("") + "50", string("") + "5");
}

TEST(abc239_problemB, case4) {
	check(string("") + "-30", string("") + "-3");
}

TEST(abc239_problemB, case5) {
	check(string("") + "987654321987654321", string("") + "98765432198765432");
}
