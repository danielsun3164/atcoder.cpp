#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc241/D";
}

TEST(abc241_problemD, case1) {
	check(string("") + "11\n" + "1 20\n" + "1 10\n" + "1 30\n" + "1 20\n" + "3 15 1\n" +
			  "3 15 2\n" + "3 15 3\n" + "3 15 4\n" + "2 100 5\n" + "1 1\n" + "2 100 5",
		  string("") + "20\n" + "20\n" + "30\n" + "-1\n" + "-1\n" + "1");
}
