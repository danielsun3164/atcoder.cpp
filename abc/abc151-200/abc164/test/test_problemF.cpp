#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC164/F";
}

TEST(abc164_problemF, case1) {
	check(string("") + "2\n" + "0 1\n" + "1 0\n" + "1 1\n" + "1 0", string("") + "1 1\n" + "1 0");
}

TEST(abc164_problemF, case2) {
	check(string("") + "2\n" + "1 1\n" + "1 0\n" + "15 15\n" + "15 11",
		  string("") + "15 11\n" + "15 11");
}
