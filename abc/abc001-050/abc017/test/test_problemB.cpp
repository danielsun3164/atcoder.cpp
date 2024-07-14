#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc017_problemB, case1) {
	check(string("") + "chokuou", string("") + "YES");
}

TEST(abc017_problemB, case2) {
	check(string("") + "kuccho", string("") + "NO");
}

TEST(abc017_problemB, case3) {
	check(string("") + "atcoder", string("") + "NO");
}
