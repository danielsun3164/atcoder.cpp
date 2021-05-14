#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc195F";

TEST(abc195F, case1) {
	check(COMMAND, string("") + "2 4", string("") + "6");
}

TEST(abc195F, case2) {
	check(COMMAND, string("") + "1 1", string("") + "2");
}

TEST(abc195F, case3) {
	check(COMMAND, string("") + "123456789000 123456789050", string("") + "2125824");
}
