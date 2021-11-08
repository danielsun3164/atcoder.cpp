#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc001B";

TEST(abc001B, case1) {
	check(COMMAND, string("") + "15000", string("") + "65");
}

TEST(abc001B, case2) {
	check(COMMAND, string("") + "75000", string("") + "89");
}

TEST(abc001B, case3) {
	check(COMMAND, string("") + "200", string("") + "02");
}
