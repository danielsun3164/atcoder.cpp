#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC072/B";
}

TEST(abc059_problemB, case1) {
	check(string("") + "36\n" + "24", string("") + "GREATER");
}

TEST(abc059_problemB, case2) {
	check(string("") + "9720246\n" + "22516266", string("") + "LESS");
}

TEST(abc059_problemB, case3) {
	check(string("") + "123456789012345678901234567890\n" + "234567890123456789012345678901",
		  string("") + "LESS");
}
