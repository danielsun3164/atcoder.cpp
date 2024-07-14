#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc223/E";
}

TEST(abc223_problemE, case1) {
	check(string("") + "3 3 2 2 3", string("") + "Yes");
}

TEST(abc223_problemE, case2) {
	check(string("") + "3 3 4 4 1", string("") + "No");
}

TEST(abc223_problemE, case3) {
	check(string("") +
			  "1000000000 1000000000 1000000000000000000 1000000000000000000 1000000000000000000",
		  string("") + "No");
}
