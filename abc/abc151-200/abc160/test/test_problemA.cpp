#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc160_problemA, case1) {
	check(PATH + COMMAND, string("") + "sippuu", string("") + "Yes");
}

TEST(abc160_problemA, case2) {
	check(PATH + COMMAND, string("") + "iphone", string("") + "No");
}

TEST(abc160_problemA, case3) {
	check(PATH + COMMAND, string("") + "coffee", string("") + "Yes");
}
