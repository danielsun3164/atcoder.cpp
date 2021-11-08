#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc210F";

TEST(abc210F, case1) {
	check(COMMAND, string("") + "3\n" + "2 5\n" + "10 9\n" + "4 8", string("") + "Yes");
}

TEST(abc210F, case2) {
	check(COMMAND, string("") + "2\n" + "10 100\n" + "1000 10000", string("") + "No");
}
