#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC191/B";
}

TEST(abc191_problemB, case1) {
	check(string("") + "5 5\n" + "3 5 6 5 4", string("") + "3 6 4");
}

TEST(abc191_problemB, case2) {
	check(string("") + "3 3\n" + "3 3 3", string("") + "");
}
