#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc190_problemD, case1) {
	check(PATH + COMMAND, string("") + "12", string("") + "4");
}

TEST(abc190_problemD, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "2");
}

TEST(abc190_problemD, case3) {
	check(PATH + COMMAND, string("") + "963761198400", string("") + "1920");
}
