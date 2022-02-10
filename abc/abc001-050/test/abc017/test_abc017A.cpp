#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc017A";

TEST(abc017A, case1) {
	check(PATH + COMMAND, string("") + "50 7\n" + "40 8\n" + "30 9", string("") + "94");
}

TEST(abc017A, case2) {
	check(PATH + COMMAND, string("") + "990 10\n" + "990 10\n" + "990 10", string("") + "2970");
}
