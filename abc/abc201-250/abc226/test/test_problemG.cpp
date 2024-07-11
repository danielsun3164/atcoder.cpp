#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc226/G";
}

TEST(abc226_problemG, case1) {
	check(string("") + "3\n" + "5 1 0 0 1\n" + "0 0 0 2 1\n" + "0 3 0 0 0\n" +
			  "0 0 2 0 0\n" + "10000000000000000 0 0 0 0\n" +
			  "0 0 0 0 2000000000000000",
		  string("") + "Yes\n" + "No\n" + "Yes");
}
