#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem074別回答";
	EXTERNAL = "typical90/074";
}

TEST(typical90_problem074別回答, case1) {
	check(string("") + "3\n" + "aba", string("") + "2");
}

TEST(typical90_problem074別回答, case2) {
	check(string("") + "10\n" + "aaaaaaaaaa", string("") + "0");
}

TEST(typical90_problem074別回答, case3) {
	check(string("") + "5\n" + "baaca", string("") + "17");
}
