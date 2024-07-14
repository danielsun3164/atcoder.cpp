#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc221/F";
}

TEST(abc221_problemF, case1) {
	check(string("") + "5\n" + "1 2\n" + "1 3\n" + "1 4\n" + "4 5", string("") + "2");
}

TEST(abc221_problemF, case2) {
	check(string("") + "4\n" + "1 2\n" + "1 3\n" + "1 4", string("") + "4");
}
