#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC195/D";
}

TEST(abc195_problemD, case1) {
	check(string("") + "3 4 3\n" + "1 9\n" + "5 3\n" + "7 8\n" + "1 8 6 9\n" + "4 4\n" + "1 4\n" +
			  "1 3",
		  string("") + "20\n" + "0\n" + "9");
}
