#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc241/E";
}

TEST(abc241_problemE, case1) {
	check(string("") + "5 3\n" + "2 1 6 3 1", string("") + "11");
}

TEST(abc241_problemE, case2) {
	check(string("") + "10 1000000000000\n" +
			  "260522 914575 436426 979445 648772 690081 933447 190629 703497 47202",
		  string("") + "826617499998784056");
}
