#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "ABC160/D";
}

TEST(abc160_problemD, case1) {
	check(string("") + "5 2 4", string("") + "5\n" + "4\n" + "1\n" + "0");
}

TEST(abc160_problemD, case2) {
	check(string("") + "3 1 3", string("") + "3\n" + "0");
}

TEST(abc160_problemD, case3) {
	check(string("") + "7 3 7", string("") + "7\n" + "8\n" + "4\n" + "2\n" + "0\n" + "0");
}

TEST(abc160_problemD, case4) {
	check(string("") + "10 4 8", string("") + "10\n" + "12\n" + "10\n" + "8\n" + "4\n" + "1\n" + "0\n" + "0\n" + "0");
}
