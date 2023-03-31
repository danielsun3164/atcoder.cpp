#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem084別回答1";
}

TEST(typical90_problem084別回答1, case1) {
	check(string("") + "4\n" + "ooxo", string("") + "5");
}

TEST(typical90_problem084別回答1, case2) {
	check(string("") + "5\n" + "oxoxo", string("") + "10");
}

TEST(typical90_problem084別回答1, case3) {
	check(string("") + "5\n" + "ooooo", string("") + "0");
}

TEST(typical90_problem084別回答1, case4) {
	check(string("") + "7\n" + "xxoooxx", string("") + "16");
}
