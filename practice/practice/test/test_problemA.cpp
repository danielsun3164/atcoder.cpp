#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(practice_problemA, case1) {
	check(string("") + "1\n" + "2 3" + "test", string("") + "6 test");
}

TEST(practice_problemA, case2) {
	check(string("") + "72\n" + "128 256\n" + "myonmyon", string("") + "456 myonmyon");
}
