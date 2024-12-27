#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC191/F";
}

TEST(abc191_problemF, case1) {
	check(string("") + "3\n" + "6 9 12", string("") + "2");
}

TEST(abc191_problemF, case2) {
	check(string("") + "4\n" + "8 2 12 6", string("") + "1");
}

TEST(abc191_problemF, case3) {
	check(string("") + "7\n" + "30 28 33 49 27 37 48", string("") + "7");
}
