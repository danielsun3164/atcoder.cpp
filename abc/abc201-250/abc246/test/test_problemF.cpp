#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc246/F";
}

TEST(abc246_problemF, case1) {
	check(string("") + "2 2\n" + "ab\n" + "ac", string("") + "7");
}

TEST(abc246_problemF, case2) {
	check(string("") + "4 3\n" + "abcdefg\n" + "hijklmnop\n" + "qrstuv\n" + "wxyz",
		  string("") + "1352");
}

TEST(abc246_problemF, case3) {
	check(string("") + "5 1000000000\n" + "abc\n" + "acde\n" + "cefg\n" + "abcfh\n" + "dghi",
		  string("") + "346462871");
}
