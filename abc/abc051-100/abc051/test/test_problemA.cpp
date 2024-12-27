#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC051/A";
}

TEST(abc051_problemA, case1) {
	check(string("") + "happy,newyear,enjoy", string("") + "happy newyear enjoy");
}

TEST(abc051_problemA, case2) {
	check(string("") + "haiku,atcoder,tasks", string("") + "haiku atcoder tasks");
}

TEST(abc051_problemA, case3) {
	check(string("") + "abcde,fghihgf,edcba", string("") + "abcde fghihgf edcba");
}
