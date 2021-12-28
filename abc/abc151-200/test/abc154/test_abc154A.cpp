#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc154A";

TEST(abc154A, case1) {
	check(PATH + COMMAND, string("") + "red blue\n" + "3 4\n" + "red", string("") + "2 4");
}

TEST(abc154A, case2) {
	check(PATH + COMMAND, string("") + "red blue\n" + "5 5\n" + "blue", string("") + "5 4");
}
