#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC067/D";
}

TEST(abc052_problemD, case1) {
	check(string("") + "4 2 5\n" + "1 2 5 7", string("") + "11");
}

TEST(abc052_problemD, case2) {
	check(string("") + "7 1 100\n" + "40 43 45 105 108 115 124", string("") + "84");
}

TEST(abc052_problemD, case3) {
	check(string("") + "7 1 2\n" + "24 35 40 68 72 99 103", string("") + "12");
}
