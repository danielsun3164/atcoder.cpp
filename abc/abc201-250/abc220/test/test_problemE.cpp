#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc220/E";
}

TEST(abc220_problemE, case1) {
	check(string("") + "3 2", string("") + "14");
}

TEST(abc220_problemE, case2) {
	check(string("") + "14142 17320", string("") + "11284501");
}
