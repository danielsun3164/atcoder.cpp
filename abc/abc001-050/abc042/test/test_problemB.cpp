#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc042_problemB, case1) {
	check(string("") + "3 3\n" + "dxx\n" + "axx\n" + "cxx", string("") + "axxcxxdxx");
}
