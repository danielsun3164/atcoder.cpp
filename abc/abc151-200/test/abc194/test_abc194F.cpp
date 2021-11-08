#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc194F";

TEST(abc194F, case1) {
	check(COMMAND, string("") + "10 1", string("") + "15");
}

TEST(abc194F, case2) {
	check(COMMAND, string("") + "FF 2", string("") + "225");
}

TEST(abc194F, case3) {
	check(COMMAND, string("") + "100 2", string("") + "226");
}

TEST(abc194F, case4) {
	check(COMMAND, string("") + "1A8FD02 4", string("") + "3784674");
}

TEST(abc194F, case5) {
	check(COMMAND, string("") + "DEADBEEFDEADBEEEEEEEEF 16", string("") + "153954073");
}
