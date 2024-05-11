#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block { COMMAND = "problemB"; }

TEST(abc041_problemB, case1) { check(string("") + "2 3 4", string("") + "24"); }

TEST(abc041_problemB, case2) {
	check(string("") + "10000 1000 100", string("") + "1000000000");
}

TEST(abc041_problemB, case3) {
	check(string("") + "100000 1 100000", string("") + "999999937");
}

TEST(abc041_problemB, case4) {
	check(string("") + "1000000000 1000000000 1000000000",
		  string("") + "999999664");
}
