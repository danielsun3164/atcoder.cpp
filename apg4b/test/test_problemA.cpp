#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemA";

TEST(ex1, case1) {
	check(COMMAND, string(""), string("") + "Hello, world!");
}
