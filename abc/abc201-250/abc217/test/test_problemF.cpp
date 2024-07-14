#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc217/F";
}

TEST(abc217_problemF, case1) {
	check(string("") + "2 3\n" + "1 2\n" + "1 4\n" + "2 3", string("") + "1");
}

TEST(abc217_problemF, case2) {
	check(string("") + "2 2\n" + "1 2\n" + "3 4", string("") + "2");
}

TEST(abc217_problemF, case3) {
	check(string("") + "2 2\n" + "1 3\n" + "2 4", string("") + "0");
}
