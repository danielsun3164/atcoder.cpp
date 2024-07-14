#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC154/C";
}

TEST(abc154_problemC, case1) {
	check(string("") + "5\n" + "2 6 1 4 5", string("") + "YES");
}

TEST(abc154_problemC, case2) {
	check(string("") + "6\n" + "4 1 3 1 6 2", string("") + "NO");
}

TEST(abc154_problemC, case3) {
	check(string("") + "2\n" + "10000000 10000000", string("") + "NO");
}
