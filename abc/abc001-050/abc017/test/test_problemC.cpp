#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc017_problemC, case1) {
	check(string("") + "4 6\n" + "1 3 30\n" + "2 3 40\n" + "3 6 25\n" + "6 6 10",
		  string("") + "80");
}

TEST(abc017_problemC, case2) {
	check(string("") + "2 7\n" + "1 3 90\n" + "5 7 90", string("") + "180");
}

TEST(abc017_problemC, case3) {
	check(string("") + "1 4\n" + "1 4 70", string("") + "0");
}
