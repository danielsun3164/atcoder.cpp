#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC192/B";
}

TEST(abc192_problemB, case1) {
	check(string("") + "dIfFiCuLt", string("") + "Yes");
}

TEST(abc192_problemB, case2) {
	check(string("") + "eASY", string("") + "No");
}

TEST(abc192_problemB, case3) {
	check(string("") + "a", string("") + "Yes");
}
