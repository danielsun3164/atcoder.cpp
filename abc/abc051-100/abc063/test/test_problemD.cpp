#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC075/D";
}

TEST(abc063_problemD, case1) {
	check(string("") + "4 5 3\n" + "8\n" + "7\n" + "4\n" + "2", string("") + "2");
}

TEST(abc063_problemD, case2) {
	check(string("") + "2 10 4\n" + "20\n" + "20", string("") + "4");
}

TEST(abc063_problemD, case3) {
	check(string("") + "5 2 1\n" + "900000000\n" + "900000000\n" + "1000000000\n" + "1000000000\n" +
			  "1000000000",
		  string("") + "800000000");
}
