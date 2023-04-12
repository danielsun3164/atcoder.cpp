#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemG";
	EXTERNAL = "abc212/G";
}

TEST(abc212_problemG, case1) {
	check(string("") + "3", string("") + "4");
}

TEST(abc212_problemG, case2) {
	check(string("") + "11", string("") + "64");
}

TEST(abc212_problemG, case3) {
	check(string("") + "998244353", string("") + "329133417");
}
