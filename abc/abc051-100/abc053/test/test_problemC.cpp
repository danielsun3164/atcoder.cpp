#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC068/C";
}

TEST(abc053_problemC, case1) {
	check(string("") + "7", string("") + "2");
}

TEST(abc053_problemC, case2) {
	check(string("") + "149696127901", string("") + "27217477801");
}
