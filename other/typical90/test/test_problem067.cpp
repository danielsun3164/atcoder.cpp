#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem067";
	EXTERNAL = "typical90/067";
}

TEST(typical90_problem067, case1) {
	check(string("") + "21 1", string("") + "15");
}

TEST(typical90_problem067, case2) {
	check(string("") + "1330 1", string("") + "555");
}

TEST(typical90_problem067, case3) {
	check(string("") + "2311640221315 15", string("") + "474547");
}
