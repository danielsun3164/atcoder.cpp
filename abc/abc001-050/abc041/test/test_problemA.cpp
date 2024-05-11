#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block { COMMAND = "problemA"; }

TEST(abc041_problemA, case1) {
	check(string("") + "atcoder\n" + "3", string("") + "c");
}

TEST(abc041_problemA, case2) {
	check(string("") + "beginner\n" + "1", string("") + "b");
}

TEST(abc041_problemA, case3) {
	check(string("") + "contest\n" + "7", string("") + "t");
}

TEST(abc041_problemA, case4) {
	check(string("") + "z\n" + "1", string("") + "z");
}
