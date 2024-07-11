#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc226/C";
}

TEST(abc226_problemC, case1) {
	check(string("") + "3\n" + "3 0\n" + "5 1 1\n" + "7 1 1",
		  string("") + "10");
}

TEST(abc226_problemC, case2) {
	check(string("") + "5\n" + "1000000000 0\n" + "1000000000 0\n" +
			  "1000000000 0\n" + "1000000000 0\n" + "1000000000 4 1 2 3 4",
		  string("") + "5000000000");
}
