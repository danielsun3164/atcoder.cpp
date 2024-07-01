#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc042_problemA, case1) {
	check(string("") + "5 5 7", string("") + "YES");
}

TEST(abc042_problemA, case2) {
	check(string("") + "7 7 5", string("") + "NO");
}
