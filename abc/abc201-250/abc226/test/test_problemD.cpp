#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc226/D";
}

TEST(abc226_problemD, case1) {
	check(string("") + "3\n" + "1 2\n" + "3 6\n" + "7 4", string("") + "6");
}

TEST(abc226_problemD, case2) {
	check(string("") + "3\n" + "1 2\n" + "2 2\n" + "4 2", string("") + "2");
}

TEST(abc226_problemD, case3) {
	check(string("") + "4\n" + "0 0\n" + "0 1000000000\n" + "1000000000 0\n" +
			  "1000000000 1000000000",
		  string("") + "8");
}
