#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC060/B";
}

TEST(abc044_problemB, case1) {
	check(string("") + "abaccaba", string("") + "Yes");
}

TEST(abc044_problemB, case2) {
	check(string("") + "hthth", string("") + "No");
}
