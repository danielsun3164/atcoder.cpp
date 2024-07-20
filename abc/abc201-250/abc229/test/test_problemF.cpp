#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc229/F";
}

TEST(abc229_problemF, case1) {
	check(string("") + "5\n" + "31 4 159 2 65\n" + "5 5 5 5 10", string("") + "16");
}

TEST(abc229_problemF, case2) {
	check(string("") + "4\n" + "100 100 100 1000000000\n" + "1 2 3 4", string("") + "10");
}
