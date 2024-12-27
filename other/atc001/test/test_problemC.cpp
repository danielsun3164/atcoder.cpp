#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(atc001_problemC, case1) {
	check(string("") + "4\n" + "1 1\n" + "2 2\n" + "3 4\n" + "4 8",
		  string("") + "0\n" + "1\n" + "4\n" + "11\n" + "26\n" + "36\n" + "40\n" + "32");
}
