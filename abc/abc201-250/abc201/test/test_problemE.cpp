#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc201/E";
}

TEST(abc201_problemE, case1) {
	check(string("") + "3\n" + "1 2 1\n" + "1 3 3", string("") + "6");
}

TEST(abc201_problemE, case2) {
	check(string("") + "5\n" + "3 5 2\n" + "2 3 2\n" + "1 5 1\n" + "4 5 13", string("") + "62");
}

TEST(abc201_problemE, case3) {
	check(string("") + "10\n" + "5 7 459221860242673109\n" + "6 8 248001948488076933\n" +
			  "3 5 371922579800289138\n" + "2 5 773108338386747788\n" +
			  "6 10 181747352791505823\n" + "1 3 803225386673329326\n" +
			  "7 8 139939802736535485\n" + "9 10 657980865814127926\n" + "2 4 146378247587539124",
		  string("") + "241240228");
}
