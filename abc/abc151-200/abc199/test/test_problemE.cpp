#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc199/E";
}

TEST(abc199_problemE, case1) {
	check(string("") + "3 1\n" + "2 2 1", string("") + "4");
}

TEST(abc199_problemE, case2) {
	check(string("") + "5 2\n" + "3 3 2\n" + "4 4 3", string("") + "90");
}

TEST(abc199_problemE, case3) {
	check(string("") + "18 0", string("") + "6402373705728000");
}
