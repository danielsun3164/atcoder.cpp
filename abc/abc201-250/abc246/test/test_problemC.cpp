#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc246/C";
}

TEST(abc246_problemC, case1) {
	check(string("") + "5 4 7\n" + "8 3 10 5 13", string("") + "12");
}

TEST(abc246_problemC, case2) {
	check(string("") + "5 100 7\n" + "8 3 10 5 13", string("") + "0");
}

TEST(abc246_problemC, case3) {
	check(string("") + "20 815 60\n" +
			  "2066 3193 2325 4030 3725 1669 1969 763 1653 159 5311 5341 4671 2374 4513 285 810 "
			  "742 2981 202",
		  string("") + "112");
}
