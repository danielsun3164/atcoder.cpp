#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF別回答";
	EXTERNAL = "ABC189/F別回答";
	TOLERANCE = 1E-3;
}

TEST(abc189_problemF別回答, case1) {
	check_about(string("") + "2 2 0\n" + "", 1.5);
}

TEST(abc189_problemF別回答, case2) {
	check_about(string("") + "2 2 1\n" + "1", 2.0);
}

TEST(abc189_problemF別回答, case3) {
	check(string("") + "100 6 10\n" + "11 12 13 14 15 16 17 18 19 20", string("") + "-1");
}

TEST(abc189_problemF別回答, case4) {
	check_about(string("") + "100000 2 2\n" + "2997 92458", 201932.2222);
}
