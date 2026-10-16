#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc244/D";
}

TEST(abc244_problemD, case1) {
	check(string("") + "R G B\n" + "R G B", string("") + "Yes");
}
