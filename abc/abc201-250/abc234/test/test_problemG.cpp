#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc234/G";
}

TEST(abc234_problemG, case1) {
	check(string("") + "3\n" + "1 2 3", string("") + "2");
}

TEST(abc234_problemG, case2) {
	check(string("") + "4\n" + "1 10 1 10", string("") + "90");
}

TEST(abc234_problemG, case3) {
	check(string("") + "10\n" +
			  "699498050 759726383 769395239 707559733 72435093 537050110 880264078 699299140 "
			  "418322627 134917794",
		  string("") + "877646588");
}
