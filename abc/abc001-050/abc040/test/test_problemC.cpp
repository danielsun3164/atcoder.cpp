#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc040_problemC, case1) {
	check(string("") + "4\n" + "100 150 130 120", string("") + "40");
}

TEST(abc040_problemC, case2) {
	check(string("") + "4\n" + "100 125 80 110", string("") + "40");
}

TEST(abc040_problemC, case3) {
	check(string("") + "9\n" + "314 159 265 358 979 323 846 264 338", string("") + "310");
}
