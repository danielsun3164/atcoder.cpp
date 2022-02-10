#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc017B";

TEST(abc017B, case1) {
	check(PATH + COMMAND, string("") + "chokuou", string("") + "YES");
}

TEST(abc017B, case2) {
	check(PATH + COMMAND, string("") + "kuccho", string("") + "NO");
}

TEST(abc017B, case3) {
	check(PATH + COMMAND, string("") + "atcoder", string("") + "NO");
}
