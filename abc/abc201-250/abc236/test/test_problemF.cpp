#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc236/F";
}

TEST(abc236_problemF, case1) {
	check(string("") + "2\n" + "4 5 3", string("") + "7");
}

TEST(abc236_problemF, case2) {
	check(string("") + "4\n" + "9 7 9 7 10 4 3 9 4 8 10 5 6 3 8", string("") + "15");
}
