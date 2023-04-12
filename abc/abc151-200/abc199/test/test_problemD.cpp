#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc199/D";
}

TEST(abc199_problemD, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "2 3\n" + "3 1", string("") + "6");
}

TEST(abc199_problemD, case2) {
	check(string("") + "3 0", string("") + "27");
}

TEST(abc199_problemD, case3) {
	check(string("") + "4 6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "2 4\n" + "1 3\n" + "1 4", string("") + "0");
}

TEST(abc199_problemD, case4) {
	check(string("") + "20 0", string("") + "3486784401");
}
