#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc238/G";
}

TEST(abc238_problemG, case1) {
	check(string("") + "8 5\n" + "7 49 30 1 15 8 6 10\n" + "1 2\n" + "2 3\n" + "4 4\n" + "5 8\n" +
			  "3 8",
		  string("") + "Yes\n" + "No\n" + "Yes\n" + "No\n" + "Yes");
}
