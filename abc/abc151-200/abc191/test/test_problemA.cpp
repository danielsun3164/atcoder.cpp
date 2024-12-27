#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC191/A";
}

TEST(abc191_problemA, case1) {
	check(string("") + "10 3 5 20", string("") + "Yes");
}

TEST(abc191_problemA, case2) {
	check(string("") + "10 3 5 30", string("") + "No");
}
