#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC057/B";
}

TEST(abc057_problemB, case1) {
	check(string("") + "2 2\n" + "2 0\n" + "0 0\n" + "-1 0\n" + "1 0", string("") + "2\n" + "1");
}

TEST(abc057_problemB, case2) {
	check(string("") + "3 4\n" + "10 10\n" + "-10 -10\n" + "3 3\n" + "1 2\n" + "2 3\n" + "3 5\n" +
			  "3 5",
		  string("") + "3\n" + "1\n" + "2");
}

TEST(abc057_problemB, case3) {
	check(string("") + "5 5\n" + "-100000000 -100000000\n" + "-100000000 100000000\n" +
			  "100000000 -100000000\n" + "100000000 100000000\n" + "0 0\n" + "0 0\n" +
			  "100000000 100000000\n" + "100000000 -100000000\n" + "-100000000 100000000\n" +
			  "-100000000 -100000000",
		  string("") + "5\n" + "4\n" + "3\n" + "2\n" + "1");
}
