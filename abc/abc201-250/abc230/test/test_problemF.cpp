#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc230/F";
}

TEST(abc230_problemF, case1) {
	check(string("") + "3\n" + "1 -1 1", string("") + "4");
}

TEST(abc230_problemF, case2) {
	check(string("") + "10\n" +
			  "377914575 -275478149 0 -444175904 719654053 -254224494 -123690081 377914575 "
			  "-254224494 -21253655",
		  string("") + "321");
}
