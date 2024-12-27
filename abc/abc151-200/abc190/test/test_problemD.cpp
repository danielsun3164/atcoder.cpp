#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC190/D";
}

TEST(abc190_problemD, case1) {
	check(string("") + "12", string("") + "4");
}

TEST(abc190_problemD, case2) {
	check(string("") + "1", string("") + "2");
}

TEST(abc190_problemD, case3) {
	check(string("") + "963761198400", string("") + "1920");
}
