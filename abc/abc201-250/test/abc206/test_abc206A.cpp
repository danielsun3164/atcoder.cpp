#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc206A";

TEST(abc206A, case1) {
	check(COMMAND, string("") + "180", string("") + "Yay!");
}

TEST(abc206A, case2) {
	check(COMMAND, string("") + "200", string("") + ":(");
}

TEST(abc206A, case3) {
	check(COMMAND, string("") + "191", string("") + "so-so");
}
