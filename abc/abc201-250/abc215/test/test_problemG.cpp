#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc215/G";
}

TEST(abc215_problemG, case1) {
	check(string("") + "3\n" + "1 2 2", string("") + "1\n" + "665496237\n" + "2");
}

TEST(abc215_problemG, case2) {
	check(string("") + "11\n" + "3 1 4 1 5 9 2 6 5 3 5",
		  string("") + "1\n" + "725995895\n" + "532396991\n" + "768345657\n" + "786495555\n" +
			  "937744700\n" + "574746754\n" + "48399732\n" + "707846002\n" + "907494873\n" + "7");
}
