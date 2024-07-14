#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc214/E";
}

TEST(abc214_problemE, case1) {
	check(string("") + "2\n" + "3\n" + "1 2\n" + "2 3\n" + "3 3\n" + "5\n" + "1 2\n" + "2 3\n" +
			  "3 3\n" + "1 3\n" + "999999999 1000000000",
		  string("") + "Yes\n" + "No");
}
