#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(practice2_problemC, case1) {
	check(string("") + "5\n" + "4 10 6 3\n" + "6 5 4 3\n" + "1 1 0 0\n" +
			  "31415 92653 58979 32384\n" + "1000000000 1000000000 999999999 999999999",
		  string("") + "3\n" + "13\n" + "0\n" + "314095480\n" + "499999999500000000");
}
