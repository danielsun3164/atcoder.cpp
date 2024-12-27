#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC161/E";
}

TEST(abc161_problemE, case1) {
	check(string("") + "11 3 2\n" + "ooxxxoxxxoo", string("") + "6");
}

TEST(abc161_problemE, case2) {
	check(string("") + "5 2 3\n" + "ooxoo", string("") + "1\n" + "5");
}

TEST(abc161_problemE, case3) {
	check_empty(string("") + "5 1 0\n" + "ooooo");
}

TEST(abc161_problemE, case4) {
	check(string("") + "16 4 3\n" + "ooxxoxoxxxoxoxxo", string("") + "11\n" + "16");
}
