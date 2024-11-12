#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc236/Ex";
}

TEST(abc236_problemEx, case1) {
	check(string("") + "3 7\n" + "2 3 4", string("") + "3");
}

TEST(abc236_problemEx, case2) {
	check(string("") + "3 3\n" + "1 2 2", string("") + "0");
}

TEST(abc236_problemEx, case3) {
	check(string("") + "6 1000000000000000000\n" +
			  "380214083 420492929 929717250 666796775 209977152 770361643",
		  string("") + "325683519");
}
