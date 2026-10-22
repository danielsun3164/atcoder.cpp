#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC075/C";
}

TEST(abc063_problemC, case1) {
	check(string("") + "3\n" + "5\n" + "10\n" + "15", string("") + "25");
}

TEST(abc063_problemC, case2) {
	check(string("") + "3\n" + "10\n" + "10\n" + "15", string("") + "35");
}

TEST(abc063_problemC, case3) {
	check(string("") + "3\n" + "10\n" + "20\n" + "30", string("") + "0");
}
