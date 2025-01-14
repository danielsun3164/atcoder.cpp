#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC156/F";
}

TEST(abc156_problemF, case1) {
	check(string("") + "3 1\n" + "3 1 4\n" + "5 3 2", string("") + "1");
}

TEST(abc156_problemF, case2) {
	check(string("") + "7 3\n" + "27 18 28 18 28 46 1000000000\n" + "1000000000 1 7\n" +
			  "1000000000 2 10\n" + "1000000000 3 12",
		  string("") + "224489796\n" + "214285714\n" + "559523809");
}
