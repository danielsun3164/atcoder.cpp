#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./practiceA";

TEST(practiceA, case1) {
	check(COMMAND, string("") + "1\n" + "2 3" + "test", string("") + "6 test");
}

TEST(practiceA, case2) {
	check(COMMAND, string("") + "72\n" + "128 256\n" + "myonmyon", string("") + "456 myonmyon");
}
