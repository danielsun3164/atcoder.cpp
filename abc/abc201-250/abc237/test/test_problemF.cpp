#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc237/F";
}

TEST(abc237_problemF, case1) {
	check(string("") + "4 5", string("") + "135");
}

TEST(abc237_problemF, case2) {
	check(string("") + "3 4", string("") + "4");
}

TEST(abc237_problemF, case3) {
	check(string("") + "111 3", string("") + "144980434");
}
