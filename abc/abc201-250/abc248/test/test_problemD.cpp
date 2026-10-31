#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc248/D";
}

TEST(abc248_problemD, case1) {
	check(string("") + "5\n" + "3 1 4 1 5\n" + "4\n" + "1 5 1\n" + "2 4 3\n" + "1 5 2\n" + "1 3 3",
		  string("") + "2\n" + "0\n" + "0\n" + "1");
}
