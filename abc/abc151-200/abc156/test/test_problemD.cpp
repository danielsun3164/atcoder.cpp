#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC156/D";
}

TEST(abc156_problemD, case1) {
	check(string("") + "4 1 3", string("") + "7");
}

TEST(abc156_problemD, case2) {
	check(string("") + "1000000000 141421 173205", string("") + "34076506");
}
