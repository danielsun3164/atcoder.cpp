#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc003_problemD, case1) {
	check(string("") + "3 2\n" + "2 2\n" + "2 2", string("") + "12");
}

TEST(abc003_problemD, case2) {
	check(string("") + "4 5\n" + "3 1\n" + "3 0", string("") + "10");
}

TEST(abc003_problemD, case3) {
	check(string("") + "23 18\n" + "15 13\n" + "100 95", string("") + "364527243");
}

TEST(abc003_problemD, case4) {
	check(string("") + "30 30\n" + "24 22\n" + "145 132", string("") + "976668549");
}
