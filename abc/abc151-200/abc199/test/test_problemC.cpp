#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc199_problemC, case1) {
	check(string("") + "2\n" + "FLIP\n" + "2\n" + "2 0 0\n" + "1 1 4", string("") + "LPFI");
}

TEST(abc199_problemC, case2) {
	check(string("") + "2\n" + "FLIP\n" + "6\n" + "1 1 3\n" + "2 0 0\n" + "1 1 2\n" + "1 2 3\n" + "2 0 0\n" + "1 1 4",
			string("") + "ILPF");
}
