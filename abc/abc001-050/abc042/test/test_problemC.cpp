#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC058_ABC042/C";
}

TEST(abc042_problemC, case1) {
	check(string("") + "1000 8\n" + "1 3 4 5 6 7 8 9", string("") + "2000");
}

TEST(abc042_problemC, case2) {
	check(string("") + "9999 1\n" + "0", string("") + "9999");
}
