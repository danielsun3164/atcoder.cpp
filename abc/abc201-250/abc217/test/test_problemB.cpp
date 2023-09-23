#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc217/B";
}

TEST(abc217_problemB, case1) {
	check(string("") + "ARC\n" + "AGC\n" + "AHC", string("") + "ABC");
}

TEST(abc217_problemB, case2) {
	check(string("") + "AGC\n" + "ABC\n" + "ARC", string("") + "AHC");
}
