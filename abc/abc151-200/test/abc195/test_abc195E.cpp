#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc195E";

TEST(abc195E, case1) {
	check(COMMAND, string("") + "2\n" + "35\n" + "AT", string("") + "Takahashi");
}

TEST(abc195E, case2) {
	check(COMMAND, string("") + "5\n" + "12345\n" + "AAAAT", string("") + "Aoki");
}

TEST(abc195E, case3) {
	check(COMMAND, string("") + "5\n" + "67890\n" + "TTTTA", string("") + "Takahashi");
}

TEST(abc195E, case4) {
	check(COMMAND, string("") + "5\n" + "12345\n" + "ATATA", string("") + "Aoki");
}
