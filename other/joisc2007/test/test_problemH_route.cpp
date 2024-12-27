#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemH_route";
	EXTERNAL = "joisc2007/Route";
}

TEST(joisc2007_problemH, case1) {
	check(string("") + "5 6\n" + "0 0\n" + "10 10\n" + "0 10\n" + "10 0\n" + "2 -6\n" + "1 2 30\n" +
			  "1 3 4\n" + "1 4 5\n" + "1 5 1\n" + "2 4 3\n" + "2 5 1",
		  string("") + "8");
}
