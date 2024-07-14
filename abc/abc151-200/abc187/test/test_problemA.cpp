#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC187/A";
}

TEST(abc187_problemA, case1) {
	check(string("") + "123 234", string("") + "9");
}

TEST(abc187_problemA, case2) {
	check(string("") + "593 953", string("") + "17");
}

TEST(abc187_problemA, case3) {
	check(string("") + "100 999", string("") + "27");
}
