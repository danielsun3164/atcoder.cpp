#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC062/D";
}

TEST(abc046_problemD, case1) {
	check(string("") + "gpg", string("") + "0");
}

TEST(abc046_problemD, case2) {
	check(string("") + "ggppgggpgg", string("") + "2");
}
