#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC076/D";
}

TEST(abc065_problemD, case1) {
	check(string("") + "3\n" + "1 5\n" + "3 9\n" + "7 8", string("") + "3");
}

TEST(abc065_problemD, case2) {
	check(string("") + "6\n" + "8 3\n" + "4 9\n" + "12 19\n" + "18 1\n" + "13 5\n" + "7 6",
		  string("") + "8");
}
