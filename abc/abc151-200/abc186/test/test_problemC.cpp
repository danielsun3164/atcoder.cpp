#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC186/C";
}

TEST(abc186_problemC, case1) {
	check(string("") + "20", string("") + "17");
}

TEST(abc186_problemC, case2) {
	check(string("") + "100000", string("") + "30555");
}
