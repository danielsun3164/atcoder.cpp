#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc063_problemA, case1) {
	check(string("") + "4 3 2", string("") + "YES");
}

TEST(abc063_problemA, case2) {
	check(string("") + "2 3 4", string("") + "NO");
}
