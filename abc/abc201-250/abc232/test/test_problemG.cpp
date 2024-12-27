#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc232/G";
}

TEST(abc232_problemG, case1) {
	check(string("") + "4 12\n" + "10 11 6 0\n" + "8 7 4 1", string("") + "3");
}

TEST(abc232_problemG, case2) {
	check(string("") + "10 1000\n" + "785 934 671 520 794 168 586 667 411 332\n" +
			  "363 763 40 425 524 311 139 875 548 198",
		  string("") + "462");
}
