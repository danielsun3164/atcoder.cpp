#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex12";
}

TEST(apg4b_ex12, case1) {
	check(string("") + "1+1+1-1", string("") + "2");
}

TEST(apg4b_ex12, case2) {
	check(string("") + "1-1-1-1-1-1", string("") + "-4");
}

TEST(apg4b_ex12, case3) {
	check(string("") + "1", string("") + "1");
}

TEST(apg4b_ex12, case4) {
	check(string("") + "1-1-1+1+1+1+1-1+1-1+1-1+1", string("") + "3");
}
