#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc009B";

TEST(abc009B, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "100\n" + "200\n" + "300\n" + "300", string("") + "200");
}

TEST(abc009B, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "50\n" + "370\n" + "819\n" + "433\n" + "120", string("") + "433");
}

TEST(abc009B, case3) {
	check(PATH + COMMAND, string("") + "6\n" + "100\n" + "100\n" + "100\n" + "200\n" + "200\n" + "200",
			string("") + "100");
}
