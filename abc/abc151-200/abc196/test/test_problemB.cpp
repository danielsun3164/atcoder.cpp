#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc196_problemB, case1) {
	check(string("") + "5.90", string("") + "5");
}

TEST(abc196_problemB, case2) {
	check(string("") + "0", string("") + "0");
}

TEST(abc196_problemB, case3) {
	check(string("") + "84939825309432908832902189.9092309409809091329", string("") + "84939825309432908832902189");
}
