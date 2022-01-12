#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc151C";

TEST(abc151C, case1) {
	check(PATH + COMMAND, string("") + "2 5\n" + "1 WA\n" + "1 AC\n" + "2 WA\n" + "2 AC\n" + "2 WA", string("") + "2 2");
}

TEST(abc151C, case2) {
	check(PATH + COMMAND, string("") + "100000 3\n" + "7777 AC\n" + "7777 AC\n" + "7777 AC", string("") + "1 0");
}

TEST(abc151C, case3) {
	check(PATH + COMMAND, string("") + "6 0", string("") + "0 0");
}