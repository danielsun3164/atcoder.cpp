#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(joi2006yo_problemC, case1) {
	check(string("") + "5\n" + "North\n" + "North\n" + "East\n" + "South\n" + "West",
		  string("") + "21");
}

TEST(joi2006yo_problemC, case2) {
	check(string("") + "8\n" + "West\n" + "North\n" + "Left\n" + "South\n" + "Right\n" + "North\n" +
			  "Left\n" + "East",
		  string("") + "34");
}
