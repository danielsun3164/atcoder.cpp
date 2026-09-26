#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC072/A";
}

TEST(abc059_problemA, case1) {
	check(string("") + "atcoder beginner contest", string("") + "ABC");
}

TEST(abc059_problemA, case2) {
	check(string("") + "resident register number", string("") + "RRN");
}

TEST(abc059_problemA, case3) {
	check(string("") + "k nearest neighbor", string("") + "KNN");
}

TEST(abc059_problemA, case4) {
	check(string("") + "async layered coding", string("") + "ALC");
}
