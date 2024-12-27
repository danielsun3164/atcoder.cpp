#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC151/C";
}

TEST(abc151_problemC, case1) {
	check(string("") + "2 5\n" + "1 WA\n" + "1 AC\n" + "2 WA\n" + "2 AC\n" + "2 WA",
		  string("") + "2 2");
}

TEST(abc151_problemC, case2) {
	check(string("") + "100000 3\n" + "7777 AC\n" + "7777 AC\n" + "7777 AC", string("") + "1 0");
}

TEST(abc151_problemC, case3) {
	check(string("") + "6 0", string("") + "0 0");
}
