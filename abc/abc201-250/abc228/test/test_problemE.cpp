#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc228/E";
}

TEST(abc228_problemE, case1) {
	check(string("") + "2 2 2", string("") + "16");
}

TEST(abc228_problemE, case2) {
	check(string("") + "3 14 15926535", string("") + "109718301");
}
