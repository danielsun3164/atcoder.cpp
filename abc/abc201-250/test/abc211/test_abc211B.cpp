#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc211B";

TEST(abc211B, case1) {
	check(COMMAND, string("") + "3B\n" + "HR\n" + "2B\n" + "H", string("") + "Yes");
}

TEST(abc211B, case2) {
	check(COMMAND, string("") + "2B\n" + "3B\n" + "HR\n" + "3B", string("") + "No");
}
