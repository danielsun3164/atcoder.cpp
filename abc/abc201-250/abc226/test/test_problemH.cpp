#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc226/H";
}

TEST(abc226_problemH, case1) {
	check(string("") + "1 1\n" + "0 2", string("") + "1");
}

TEST(abc226_problemH, case2) {
	check(string("") + "2 2\n" + "0 2\n" + "1 3", string("") + "707089751");
}

TEST(abc226_problemH, case3) {
	check(string("") + "10 5\n" + "35 48\n" + "44 64\n" + "47 59\n" + "39 97\n" + "36 37\n" +
			  "4 91\n" + "38 82\n" + "20 84\n" + "38 50\n" + "39 69",
		  string("") + "810056397");
}
