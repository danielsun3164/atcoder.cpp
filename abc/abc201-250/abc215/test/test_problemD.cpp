#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc215/D";
}

TEST(abc215_problemD, case1) {
	check(string("") + "3 12\n" + "6 1 5", string("") + "3\n" + "1\n" + "7\n" + "11");
}
