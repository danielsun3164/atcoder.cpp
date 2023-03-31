#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem074";
}

TEST(typical90_problem074, case1) {
	check(string("") + "3\n" + "aba", string("") + "2");
}

TEST(typical90_problem074, case2) {
	check(string("") + "10\n" + "aaaaaaaaaa", string("") + "0");
}

TEST(typical90_problem074, case3) {
	check(string("") + "5\n" + "baaca", string("") + "17");
}
