#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc235/G";
}

TEST(abc235_problemG, case1) {
	check(string("") + "2 2 1 1", string("") + "21");
}

TEST(abc235_problemG, case2) {
	check(string("") + "2 0 0 0", string("") + "0");
}

TEST(abc235_problemG, case3) {
	check(string("") + "2 0 2 2", string("") + "9");
}

TEST(abc235_problemG, case4) {
	check(string("") + "100 12 34 56", string("") + "769445780");
}

TEST(abc235_problemG, case5) {
	check(string("") + "5000000 2521993 2967363 3802088", string("") + "264705492");
}
