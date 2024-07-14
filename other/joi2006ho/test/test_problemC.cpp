#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(joi2006ho_problemC, case1) {
	check(string("") + "5", string("") + "5\n" + "4 1\n" + "3 2\n" + "3 1 1\n" + "2 2 1\n" +
								"2 1 1 1\n" + "1 1 1 1 1");
}
