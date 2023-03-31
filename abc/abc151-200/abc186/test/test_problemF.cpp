#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc186_problemF, case1) {
	check(string("") + "4 3 2\n" + "2 2\n" + "3 3", string("") + "10");
}

TEST(abc186_problemF, case2) {
	check(string("") + "5 4 4\n" + "3 2\n" + "3 4\n" + "4 2\n" + "5 2", string("") + "14");
}

TEST(abc186_problemF, case3) {
	check(string("") + "200000 200000 0", string("") + "40000000000");
}

TEST(abc186_problemF, case4) {
	check(string("") + "100000 200000 0", string("") + "20000000000");
}
