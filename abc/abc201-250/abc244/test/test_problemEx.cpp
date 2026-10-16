#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc244/Ex";
}

TEST(abc244_problemEx, case1) {
	check(string("") + "4\n" + "1 0 -1 -1\n" + "0 1 2 0\n" + "-1 0 1 1\n" + "0 -1 1 -2",
		  string("") + "-1\n" + "2\n" + "1\n" + "2");
}

TEST(abc244_problemEx, case2) {
	check(string("") + "9\n" + "-1 4 -8 -2\n" + "9 -9 -7 7\n" + "4 1 6 7\n" + "-4 -1 -4 -5\n" +
			  "-9 3 -2 -6\n" + "-1 0 -8 5\n" + "-8 -5 0 0\n" + "8 3 0 -4\n" + "2 -5 2 5",
		  string("") + "0\n" + "35\n" + "31\n" + "21\n" + "36\n" + "87\n" + "0\n" + "36\n" + "31");
}
