#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc192B";

TEST(abc192B, case1) {
	check(COMMAND, string("") + "dIfFiCuLt", string("") + "Yes");
}

TEST(abc192B, case2) {
	check(COMMAND, string("") + "eASY", string("") + "No");
}

TEST(abc192B, case3) {
	check(COMMAND, string("") + "a", string("") + "Yes");
}
