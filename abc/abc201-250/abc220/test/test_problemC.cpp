#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc220/C";
}

TEST(abc220_problemC, case1) {
	check(string("") + "3\n" + "3 5 2\n" + "26", string("") + "8");
}

TEST(abc220_problemC, case2) {
	check(string("") + "4\n" + "12 34 56 78\n" + "1000", string("") + "23");
}
