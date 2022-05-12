#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc008_problemB, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "taro\n" + "jiro\n" + "taro\n" + "saburo", string("") + "taro");
}

TEST(abc008_problemB, case2) {
	check(PATH + COMMAND, string("") + "1\n" + "takahashikun", string("") + "takahashikun");
}

TEST(abc008_problemB, case3) {
	check(PATH + COMMAND, string("") + "9\n" + "a\n" + "b\n" + "c\n" + "c\n" + "b\n" + "c\n" + "b\n" + "d\n" + "e",
			string("") + "b", string("") + "c");
}
