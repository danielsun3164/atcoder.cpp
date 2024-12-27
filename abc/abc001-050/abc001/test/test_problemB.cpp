#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc001_problemB, case1) {
	check(string("") + "15000", string("") + "65");
}

TEST(abc001_problemB, case2) {
	check(string("") + "75000", string("") + "89");
}

TEST(abc001_problemB, case3) {
	check(string("") + "200", string("") + "02");
}
