#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC154/E";
}

TEST(abc154_problemE, case1) {
	check(string("") + "100\n" + "1", string("") + "19");
}

TEST(abc154_problemE, case2) {
	check(string("") + "25\n" + "2", string("") + "14");
}

TEST(abc154_problemE, case3) {
	check(string("") + "314159\n" + "2", string("") + "937");
}

TEST(abc154_problemE, case4) {
	check(
			string("")
					+ "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999\n"
					+ "3", string("") + "117879300");
}
