#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc235/E";
}

TEST(abc235_problemE, case1) {
	check(string("") + "5 6 3\n" + "1 2 2\n" + "2 3 3\n" + "1 3 6\n" + "2 4 5\n" + "4 5 9\n" +
			  "3 5 8\n" + "1 3 1\n" + "3 4 7\n" + "3 5 7",
		  string("") + "Yes\n" + "No\n" + "Yes");
}

TEST(abc235_problemE, case2) {
	check(
		string("") + "2 3 2\n" + "1 2 100\n" + "1 2 1000000000\n" + "1 1 1\n" + "1 2 2\n" + "1 1 5",
		string("") + "Yes\n" + "No");
}
