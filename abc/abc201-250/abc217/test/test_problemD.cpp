#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc217/D";
}

TEST(abc217_problemD, case1) {
	check(string("") + "5 3\n" + "2 2\n" + "1 3\n" + "2 2", string("") + "5\n" + "3");
}

TEST(abc217_problemD, case2) {
	check(string("") + "5 3\n" + "1 2\n" + "1 4\n" + "2 3", string("") + "2");
}

TEST(abc217_problemD, case3) {
	check(string("") + "100 10\n" + "1 31\n" + "2 41\n" + "1 59\n" + "2 26\n" + "1 53\n" +
			  "2 58\n" + "1 97\n" + "2 93\n" + "1 23\n" + "2 84",
		  string("") + "69\n" + "31\n" + "6\n" + "38\n" + "38");
}
