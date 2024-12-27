#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc024_problemA, case1) {
	check(string("") + "100 200 50 20\n" + "40 10", string("") + "3500");
}

TEST(abc024_problemA, case2) {
	check(string("") + "400 1000 400 21\n" + "10 10", string("") + "14000");
}

TEST(abc024_problemA, case3) {
	check(string("") + "400 1000 400 20\n" + "10 10", string("") + "6000");
}
