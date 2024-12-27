#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC196/F";
}

TEST(abc196_problemF, case1) {
	check(string("") + "0001\n" + "101", string("") + "1");
}

TEST(abc196_problemF, case2) {
	check(string("") + "0101010\n" + "1010101", string("") + "7");
}

TEST(abc196_problemF, case3) {
	check(string("") + "10101000010011011110\n" + "0010011111", string("") + "1");
}
