#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC154/A";
}

TEST(abc154_problemA, case1) {
	check(string("") + "red blue\n" + "3 4\n" + "red", string("") + "2 4");
}

TEST(abc154_problemA, case2) {
	check(string("") + "red blue\n" + "5 5\n" + "blue", string("") + "5 4");
}
