#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc225/F";
}

TEST(abc225_problemF, case1) {
	check(string("") + "4 3\n" + "ode\n" + "zaaa\n" + "r\n" + "atc", string("") + "atcoder");
}

TEST(abc225_problemF, case2) {
	check(string("") + "5 2\n" + "z\n" + "z\n" + "zzz\n" + "z\n" + "zzzzzz", string("") + "zz");
}
