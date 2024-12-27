#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC158/E";
}

TEST(abc158_problemE, case1) {
	check(string("") + "4 3\n" + "3543", string("") + "6");
}

TEST(abc158_problemE, case2) {
	check(string("") + "4 2\n" + "2020", string("") + "10");
}

TEST(abc158_problemE, case3) {
	check(string("") + "20 11\n" + "33883322005544116655", string("") + "68");
}
