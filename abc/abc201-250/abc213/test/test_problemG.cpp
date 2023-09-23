#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemG";
	EXTERNAL = "abc213/G";
}

TEST(abc213_problemG, case1) {
	check(string("") + "3 2\n" + "1 2\n" + "2 3", string("") + "2\n" + "1");
}

TEST(abc213_problemG, case2) {
	check(string("") + "5 6\n" + "1 2\n" + "1 4\n" + "1 5\n" + "2 3\n" + "2 5\n" + "3 4",
			string("") + "43\n" + "31\n" + "37\n" + "41");
}

TEST(abc213_problemG, case3) {
	check(string("") + "2 0", string("") + "0");
}
