#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc235/Ex";
}

TEST(abc235_problemEx, case1) {
	check(string("") + "3 2 1\n" + "1 2 1\n" + "2 3 2", string("") + "6");
}

TEST(abc235_problemEx, case2) {
	check(string("") + "5 0 2", string("") + "16");
}

TEST(abc235_problemEx, case3) {
	check(string("") + "6 8 2\n" + "1 2 1\n" + "2 3 2\n" + "3 4 3\n" + "4 5 1\n" + "5 6 2\n" +
			  "6 1 3\n" + "1 2 10\n" + "1 1 100",
		  string("") + "40");
}
