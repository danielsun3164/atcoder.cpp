#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc233/Ex";
}

TEST(abc233_problemEx, case1) {
	check(string("") + "4\n" + "3 3\n" + "4 6\n" + "7 4\n" + "2 5\n" + "6\n" + "3 5 1\n" +
			  "3 5 2\n" + "3 5 3\n" + "3 5 4\n" + "100 200 3\n" + "300 200 1",
		  string("") + "1\n" + "2\n" + "2\n" + "5\n" + "293\n" + "489");
}
