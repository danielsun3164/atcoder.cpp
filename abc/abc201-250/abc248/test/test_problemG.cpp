#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc248/G";
}

TEST(abc248_problemG, case1) {
	check(string("") + "4\n" + "24 30 28 7\n" + "1 2\n" + "1 3\n" + "3 4", string("") + "47");
}

TEST(abc248_problemG, case2) {
	check(string("") + "10\n" + "180 168 120 144 192 200 198 160 156 150\n" + "1 2\n" + "2 3\n" +
			  "2 4\n" + "2 5\n" + "5 6\n" + "4 7\n" + "7 8\n" + "7 9\n" + "9 10",
		  string("") + "1184");
}
