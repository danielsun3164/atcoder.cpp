#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc220/G";
}

TEST(abc220_problemG, case1) {
	check(string("") + "5\n" + "0 3 10\n" + "3 3 10\n" + "-1 0 10\n" + "2 0 10000\n" + "4 0 10",
		  string("") + "40");
}

TEST(abc220_problemG, case2) {
	check(string("") + "6\n" + "0 1 1\n" + "1 4 20\n" + "2 7 300\n" + "5 6 4000\n" + "4 3 50000\n" +
			  "3 0 600000",
		  string("") + "650021");
}

TEST(abc220_problemG, case3) {
	check(string("") + "7\n" + "-3 0 1\n" + "-2 0 1\n" + "-1 0 1\n" + "0 0 1\n" + "1 0 1\n" +
			  "2 0 1\n" + "3 0 1",
		  string("") + "-1");
}
