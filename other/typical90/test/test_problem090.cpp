#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem090";
	EXTERNAL = "typical90/090";
}

TEST(typical90_problem090, case1) {
	check(string("") + "2 2", string("") + "8");
}

TEST(typical90_problem090, case2) {
	check(string("") + "17 29", string("") + "263173793");
}

TEST(typical90_problem090, case3) {
	check(string("") + "2718 2818", string("") + "393799986");
}

TEST(typical90_problem090, case4) {
	check(string("") + "28593 1", string("") + "365728740");
}

TEST(typical90_problem090, case5) {
	check(string("") + "869120 1001", string("") + "967393022");
}
