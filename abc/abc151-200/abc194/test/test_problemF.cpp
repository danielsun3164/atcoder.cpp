#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc194_problemF, case1) {
	check(string("") + "10 1", string("") + "15");
}

TEST(abc194_problemF, case2) {
	check(string("") + "FF 2", string("") + "225");
}

TEST(abc194_problemF, case3) {
	check(string("") + "100 2", string("") + "226");
}

TEST(abc194_problemF, case4) {
	check(string("") + "1A8FD02 4", string("") + "3784674");
}

TEST(abc194_problemF, case5) {
	check(string("") + "DEADBEEFDEADBEEEEEEEEF 16", string("") + "153954073");
}
