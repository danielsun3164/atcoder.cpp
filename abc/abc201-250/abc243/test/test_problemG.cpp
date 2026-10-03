#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc243/G";
}

TEST(abc243_problemG, case1) {
	check(string("") + "4\n" + "16\n" + "1\n" + "123456789012\n" + "1000000000000000000",
		  string("") + "5\n" + "1\n" + "4555793983\n" + "23561347048791096");
}
