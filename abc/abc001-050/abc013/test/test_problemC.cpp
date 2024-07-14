#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc013_problemC, case1) {
	check(string("") + "4 5\n" + "100 4 60 1 4", string("") + "160");
}

TEST(abc013_problemC, case2) {
	check(string("") + "10 1\n" + "5000 2 2000 1 300", string("") + "20000");
}

TEST(abc013_problemC, case3) {
	check(string("") + "9 23\n" + "170 8 120 5 12", string("") + "650");
}

TEST(abc013_problemC, case4) {
	check(string("") + "653 314159\n" + "6728 123456 5141 41928 222222", string("") + "2818162");
}
