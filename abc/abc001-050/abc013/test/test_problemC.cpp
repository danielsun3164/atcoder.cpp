#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "4 5\n" + "100 4 60 1 4", string("") + "160");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "10 1\n" + "5000 2 2000 1 300", string("") + "20000");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "9 23\n" + "170 8 120 5 12", string("") + "650");
}

TEST(problemC, case4) {
	check(PATH + COMMAND, string("") + "653 314159\n" + "6728 123456 5141 41928 222222", string("") + "2818162");
}
