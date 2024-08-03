#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC065/C";
}

TEST(abc049_problemC, case1) {
	check(string("") + "erasedream", string("") + "YES");
}

TEST(abc049_problemC, case2) {
	check(string("") + "dreameraser", string("") + "YES");
}

TEST(abc049_problemC, case3) {
	check(string("") + "dreamerer", string("") + "NO");
}
