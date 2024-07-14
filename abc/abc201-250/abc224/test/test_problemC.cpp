#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc224/C";
}

TEST(abc224_problemC, case1) {
	check(string("") + "4\n" + "0 1\n" + "1 3\n" + "1 1\n" + "-1 -1", string("") + "3");
}

TEST(abc224_problemC, case2) {
	check(string("") + "20\n" + "224 433\n" + "987654321 987654321\n" + "2 0\n" + "6 4\n" +
			  "314159265 358979323\n" + "0 0\n" + "-123456789 123456789\n" +
			  "-1000000000 1000000000\n" + "124 233\n" + "9 -6\n" + "-4 0\n" + "9 5\n" + "-7 3\n" +
			  "333333333 -333333333\n" + "-9 -1\n" + "7 -10\n" + "-1 5\n" + "324 633\n" +
			  "1000000000 -1000000000\n" + "20 0",
		  string("") + "1124");
}
