#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc016_problemA, case1) {
	check(string("") + "1 1", string("") + "YES");
}

TEST(abc016_problemA, case2) {
	check(string("") + "2 29", string("") + "NO");
}

TEST(abc016_problemA, case3) {
	check(string("") + "12 6", string("") + "YES");
}
