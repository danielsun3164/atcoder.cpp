#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc231/E";
}

TEST(abc231_problemE, case1) {
	check(string("") + "3 87\n" + "1 10 100", string("") + "5");
}

TEST(abc231_problemE, case2) {
	check(string("") + "2 49\n" + "1 7", string("") + "7");
}

TEST(abc231_problemE, case3) {
	check(string("") + "10 123456789012345678\n" +
			  "1 100 10000 1000000 100000000 10000000000 1000000000000 100000000000000 "
			  "10000000000000000 1000000000000000000",
		  string("") + "233");
}
