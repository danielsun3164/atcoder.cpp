#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC153/F";
}

TEST(abc153_problemF, case1) {
	check(string("") + "3 3 2\n" + "1 2\n" + "5 4\n" + "9 2", string("") + "2");
}

TEST(abc153_problemF, case2) {
	check(string("") + "9 4 1\n" + "1 5\n" + "2 4\n" + "3 3\n" + "4 2\n" + "5 1\n" + "6 2\n" +
			  "7 3\n" + "8 4\n" + "9 5",
		  string("") + "5");
}

TEST(abc153_problemF, case3) {
	check(string("") + "3 0 1\n" + "300000000 1000000000\n" + "100000000 1000000000\n" +
			  "200000000 1000000000",
		  string("") + "3000000000");
}
