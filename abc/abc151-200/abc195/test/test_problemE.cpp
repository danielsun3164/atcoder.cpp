#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc195_problemE, case1) {
	check(string("") + "2\n" + "35\n" + "AT", string("") + "Takahashi");
}

TEST(abc195_problemE, case2) {
	check(string("") + "5\n" + "12345\n" + "AAAAT", string("") + "Aoki");
}

TEST(abc195_problemE, case3) {
	check(string("") + "5\n" + "67890\n" + "TTTTA", string("") + "Takahashi");
}

TEST(abc195_problemE, case4) {
	check(string("") + "5\n" + "12345\n" + "ATATA", string("") + "Aoki");
}
