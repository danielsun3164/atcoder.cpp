#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC165/F";
}

TEST(abc165_problemF, case1) {
	check(string("") + "10\n" + "1 2 5 3 4 6 7 3 2 4\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" +
			  "3 6\n" + "6 7\n" + "1 8\n" + "8 9\n" + "9 10",
		  string("") + "1\n" + "2\n" + "3\n" + "3\n" + "4\n" + "4\n" + "5\n" + "2\n" + "2\n" + "3");
}
