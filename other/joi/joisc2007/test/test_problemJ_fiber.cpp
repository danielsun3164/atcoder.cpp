#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemJ_fiber";
	EXTERNAL = "joisc2007/Fiber";
}

TEST(joisc2007_problemJ, case1) {
	check(string("") + "8\n" + "7\n" + "3 5\n" + "4 1\n" + "5 4\n" + "7 5\n" + "4 7\n" + "1 4\n" +
			  "6 8",
		  string("") + "2");
}
