#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc244/F";
}

TEST(abc244_problemF, case1) {
	check(string("") + "3 2\n" + "1 2\n" + "2 3", string("") + "14");
}

TEST(abc244_problemF, case2) {
	check(string("") + "5 5\n" + "4 2\n" + "2 3\n" + "1 3\n" + "2 1\n" + "1 5", string("") + "108");
}
