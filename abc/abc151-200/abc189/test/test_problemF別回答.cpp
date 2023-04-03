#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF別回答";
}
static const double TOLERANCE = 0.001;

TEST(abc189_problemF別回答, case1) {
	check_about(string("") + "2 2 0\n" + "", 1.5, TOLERANCE);
}

TEST(abc189_problemF別回答, case2) {
	check_about(string("") + "2 2 1\n" + "1", 2.0, TOLERANCE);
}

TEST(abc189_problemF別回答, case3) {
	check(string("") + "100 6 10\n" + "11 12 13 14 15 16 17 18 19 20", string("") + "-1");
}

TEST(abc189_problemF別回答, case4) {
	check_about(string("") + "100000 2 2\n" + "2997 92458", 201932.2222, TOLERANCE);
}
