#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc020_problemD, case1) {
	check(string("") + "4 2", string("") + "14");
}

TEST(abc020_problemD, case2) {
	check(string("") + "10000 100", string("") + "865504986");
}

TEST(abc020_problemD, case3) {
	check(string("") + "1000000000 90", string("") + "50001213");
}

TEST(abc020_problemD, case4) {
	check(string("") + "1000000000 999999900", string("") + "231285006");
}
