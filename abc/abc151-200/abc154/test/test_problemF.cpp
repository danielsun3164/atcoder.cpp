#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC154/F";
}

TEST(abc154_problemF, case1) {
	check(string("") + "1 1 2 2", string("") + "14");
}

TEST(abc154_problemF, case2) {
	check(string("") + "314 159 2653 589", string("") + "602215194");
}
