#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc242/G";
}

TEST(abc242_problemG, case1) {
	check(string("") + "10\n" + "1 2 3 2 3 1 3 1 2 3\n" + "6\n" + "6 10\n" + "5 8\n" + "3 6\n" +
			  "4 4\n" + "1 6\n" + "1 10",
		  string("") + "2\n" + "2\n" + "1\n" + "0\n" + "3\n" + "4");
}
