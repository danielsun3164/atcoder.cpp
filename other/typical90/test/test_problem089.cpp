#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem089";
}

TEST(typical90_problem089, case1) {
	check(string("") + "4 0\n" + "3 1 4 2", string("") + "2");
}

TEST(typical90_problem089, case2) {
	check(string("") + "7 2\n" + "5 3 7 2 1 2 3", string("") + "44");
}

TEST(typical90_problem089, case3) {
	check(string("") + "7 0\n" + "7 6 5 4 3 2 1", string("") + "1");
}
