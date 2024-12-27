#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc213/F";
}

TEST(abc213_problemF, case1) {
	check(string("") + "3\n" + "abb", string("") + "3\n" + "3\n" + "2");
}

TEST(abc213_problemF, case2) {
	check(string("") + "11\n" + "mississippi", string("") + "11\n" + "16\n" + "14\n" + "12\n" +
												   "13\n" + "11\n" + "9\n" + "7\n" + "4\n" + "3\n" +
												   "4");
}
