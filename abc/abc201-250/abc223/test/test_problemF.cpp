#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc223/F";
}

TEST(abc223_problemF, case1) {
	check(string("") + "5 3\n" + "(())(\n" + "2 1 4\n" + "2 1 2\n" + "2 4 5",
		  string("") + "Yes\n" + "No\n" + "No");
}

TEST(abc223_problemF, case2) {
	check(string("") + "5 3\n" + "(())(\n" + "2 1 4\n" + "1 1 4\n" + "2 1 4",
		  string("") + "Yes\n" + "No");
}

TEST(abc223_problemF, case3) {
	check(string("") + "8 8\n" + "(()(()))\n" + "2 2 7\n" + "2 2 8\n" + "1 2 5\n" + "2 3 4\n" +
			  "1 3 4\n" + "1 3 5\n" + "1 1 4\n" + "1 6 8",
		  string("") + "Yes\n" + "No\n" + "No");
}
