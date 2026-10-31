#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc248/E";
}

TEST(abc248_problemE, case1) {
	check(string("") + "5 2\n" + "0 0\n" + "1 0\n" + "0 1\n" + "-1 0\n" + "0 -1", string("") + "6");
}

TEST(abc248_problemE, case2) {
	check(string("") + "1 1\n" + "0 0", string("") + "Infinity");
}
