#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc235/A";
}

TEST(abc235_problemA, case1) {
	check(string("") + "123", string("") + "666");
}

TEST(abc235_problemA, case2) {
	check(string("") + "999", string("") + "2997");
}
