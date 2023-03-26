#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem090";

TEST(typical90_problem090, case1) {
	check(PATH + COMMAND, string("") + "2 2", string("") + "8");
}

TEST(typical90_problem090, case2) {
	check(PATH + COMMAND, string("") + "17 29", string("") + "263173793");
}

TEST(typical90_problem090, case3) {
	check(PATH + COMMAND, string("") + "2718 2818", string("") + "393799986");
}

TEST(typical90_problem090, case4) {
	check(PATH + COMMAND, string("") + "28593 1", string("") + "365728740");
}

TEST(typical90_problem090, case5) {
	check(PATH + COMMAND, string("") + "869120 1001", string("") + "967393022");
}
