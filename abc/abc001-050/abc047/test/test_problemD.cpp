#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC063/D";
}

TEST(abc047_problemD, case1) {
	check(string("") + "3 2\n" + "100 50 200", string("") + "1");
}

TEST(abc047_problemD, case2) {
	check(string("") + "5 8\n" + "50 30 40 10 20", string("") + "2");
}

TEST(abc047_problemD, case3) {
	check(string("") + "10 100\n" + "7 10 4 5 9 3 6 8 2 1", string("") + "2");
}
