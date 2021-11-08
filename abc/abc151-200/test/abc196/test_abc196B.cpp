#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc196B";

TEST(abc196B, case1) {
	check(COMMAND, string("") + "5.90", string("") + "5");
}

TEST(abc196B, case2) {
	check(COMMAND, string("") + "0", string("") + "0");
}

TEST(abc196B, case3) {
	check(COMMAND, string("") + "84939825309432908832902189.9092309409809091329",
			string("") + "84939825309432908832902189");
}
