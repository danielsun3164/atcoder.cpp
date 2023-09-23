#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc220/F";
}

TEST(abc220_problemF, case1) {
	check(string("") + "3\n" + "1 2\n" + "2 3", string("") + "3\n" + "2\n" + "3");
}

TEST(abc220_problemF, case2) {
	check(string("") + "2\n" + "1 2", string("") + "1\n" + "1");
}

TEST(abc220_problemF, case3) {
	check(string("") + "6\n" + "1 6\n" + "1 5\n" + "1 3\n" + "1 4\n" + "1 2",
			string("") + "5\n" + "9\n" + "9\n" + "9\n" + "9\n" + "9");
}
