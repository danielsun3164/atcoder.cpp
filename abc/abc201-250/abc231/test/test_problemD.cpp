#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc231/D";
}

TEST(abc231_problemD, case1) {
	check(string("") + "4 2\n" + "1 3\n" + "2 3", string("") + "Yes");
}

TEST(abc231_problemD, case2) {
	check(string("") + "4 3\n" + "1 4\n" + "2 4\n" + "3 4", string("") + "No");
}
