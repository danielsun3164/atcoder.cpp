#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC070/D";
}

TEST(abc056_problemD, case1) {
	check(string("") + "3 6\n" + "1 4 3", string("") + "1");
}

TEST(abc056_problemD, case2) {
	check(string("") + "5 400\n" + "3 1 4 1 5", string("") + "5");
}

TEST(abc056_problemD, case3) {
	check(string("") + "6 20\n" + "10 4 3 10 25 2", string("") + "3");
}
