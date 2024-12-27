#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc222/H";
}

TEST(abc222_problemH, case1) {
	check(string("") + "1", string("") + "1");
}

TEST(abc222_problemH, case2) {
	check(string("") + "2", string("") + "6");
}

TEST(abc222_problemH, case3) {
	check(string("") + "222", string("") + "987355927");
}

TEST(abc222_problemH, case4) {
	check(string("") + "222222", string("") + "675337738");
}
