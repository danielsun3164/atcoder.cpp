#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc152D";

TEST(abc152D, case1) {
	check(COMMAND, string("") + "25", string("") + "17");
}

TEST(abc152D, case2) {
	check(COMMAND, string("") + "1", string("") + "1");
}

TEST(abc152D, case3) {
	check(COMMAND, string("") + "100", string("") + "108");
}

TEST(abc152D, case4) {
	check(COMMAND, string("") + "2020", string("") + "40812");
}

TEST(abc152D, case5) {
	check(COMMAND, string("") + "200000", string("") + "400000008");
}
