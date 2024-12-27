#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc222/G";
}

TEST(abc222_problemG, case1) {
	check(string("") + "4\n" + "1\n" + "7\n" + "10\n" + "999983",
		  string("") + "1\n" + "6\n" + "-1\n" + "999982");
}
