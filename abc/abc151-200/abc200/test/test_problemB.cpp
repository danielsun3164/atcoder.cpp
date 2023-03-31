#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc200_problemB, case1) {
	check(string("") + "2021 4", string("") + "50531");
}

TEST(abc200_problemB, case2) {
	check(string("") + "40000 2", string("") + "1");
}

TEST(abc200_problemB, case3) {
	check(string("") + "8691 20", string("") + "84875488281");
}
