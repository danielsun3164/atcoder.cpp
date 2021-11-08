#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc199C";

TEST(abc199C, case1) {
	check(COMMAND, string("") + "2\n" + "FLIP\n" + "2\n" + "2 0 0\n" + "1 1 4", string("") + "LPFI");
}

TEST(abc199C, case2) {
	check(COMMAND,
			string("") + "2\n" + "FLIP\n" + "6\n" + "1 1 3\n" + "2 0 0\n" + "1 1 2\n" + "1 2 3\n" + "2 0 0\n" + "1 1 4",
			string("") + "ILPF");
}
