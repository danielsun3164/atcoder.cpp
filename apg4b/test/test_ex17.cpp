#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex17";

TEST(ex17, case1) {
	check(PATH + COMMAND, string("") + "3 400\n" + "100 100 130\n" + "270 300 250", string("") + "3");
}

TEST(ex17, case2) {
	check(PATH + COMMAND,
			string("") + "10 600\n" + "70 110 90 120 90 20 260 150 220 150\n" + "170 100 250 350 60 280 450 460 20 220",
			string("") + "2");
}

TEST(ex17, case3) {
	check(PATH + COMMAND, string("") + "3 200\n" + "100 100 100\n" + "100 100 100", string("") + "9");
}

TEST(ex17, case4) {
	check(PATH + COMMAND, string("") + "1 0\n" + "100\n" + "200", string("") + "0");
}
