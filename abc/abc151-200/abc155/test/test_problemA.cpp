#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC155/A";
}

TEST(abc155_problemA, case1) {
	check(string("") + "5 7 5", string("") + "Yes");
}

TEST(abc155_problemA, case2) {
	check(string("") + "4 4 4", string("") + "No");
}

TEST(abc155_problemA, case3) {
	check(string("") + "4 9 6", string("") + "No");
}

TEST(abc155_problemA, case4) {
	check(string("") + "3 3 4", string("") + "Yes");
}
