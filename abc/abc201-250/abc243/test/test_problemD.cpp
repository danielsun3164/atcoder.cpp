#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc243/D";
}

TEST(abc243_problemD, case1) {
	check(string("") + "3 2\n" + "URL", string("") + "6");
}

TEST(abc243_problemD, case2) {
	check(string("") + "4 500000000000000000\n" + "RRUU", string("") + "500000000000000000");
}

TEST(abc243_problemD, case3) {
	check(string("") + "30 123456789\n" + "LRULURLURLULULRURRLRULRRRUURRU",
		  string("") + "126419752371");
}
