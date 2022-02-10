#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc210A";

TEST(abc210A, case1) {
	check(PATH + COMMAND, string("") + "5 3 20 15", string("") + "90");
}

TEST(abc210A, case2) {
	check(PATH + COMMAND, string("") + "10 10 100 1", string("") + "1000");
}
