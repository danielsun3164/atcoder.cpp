#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc222/A";
}

TEST(abc222_problemA, case1) {
	check(string("") + "321", string("") + "0321");
}

TEST(abc222_problemA, case2) {
	check(string("") + "7777", string("") + "7777");
}

TEST(abc222_problemA, case3) {
	check(string("") + "1", string("") + "0001");
}
