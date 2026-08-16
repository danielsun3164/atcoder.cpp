#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc240/F";
}

TEST(abc240_problemF, case1) {
	check(string("") + "3\n" + "3 7\n" + "-1 2\n" + "2 3\n" + "-3 2\n" + "10 472\n" + "-4 12\n" +
			  "1 29\n" + "2 77\n" + "-1 86\n" + "0 51\n" + "3 81\n" + "3 17\n" + "-2 31\n" +
			  "-4 65\n" + "4 23\n" + "1 1000000000\n" + "4 1000000000",
		  string("") + "4\n" + "53910\n" + "2000000002000000000");
}
