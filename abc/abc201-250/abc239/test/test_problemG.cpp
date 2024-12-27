#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc239/G";
}

TEST(abc239_problemG, case1) {
	check(string("") + "5 5\n" + "1 2\n" + "2 3\n" + "3 5\n" + "2 4\n" + "4 5\n" + "0 8 3 4 0",
		  string("") + "7\n" + "2\n" + "3 4");
}

TEST(abc239_problemG, case2) {
	check(string("") + "3 2\n" + "1 2\n" + "2 3\n" + "0 1 0", string("") + "1\n" + "1\n" + "2");
}

TEST(abc239_problemG, case3) {
	check(string("") + "5 9\n" + "1 2\n" + "1 3\n" + "1 4\n" + "2 3\n" + "2 4\n" + "2 5\n" +
			  "3 4\n" + "3 5\n" + "4 5\n" + "0 1000000000 1000000000 1000000000 0",
		  string("") + "3000000000\n" + "3\n" + "2 3 4");
}
