#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc007A";

TEST(abc007A, case1) {
	check(COMMAND, string("") + "4", string("") + "3");
}

TEST(abc007A, case2) {
	check(COMMAND, string("") + "100", string("") + "99");
}

TEST(abc007A, case3) {
	check(COMMAND, string("") + "1", string("") + "0");
}
