#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc008_problemB, case1) {
	check(string("") + "4\n" + "taro\n" + "jiro\n" + "taro\n" + "saburo", string("") + "taro");
}

TEST(abc008_problemB, case2) {
	check(string("") + "1\n" + "takahashikun", string("") + "takahashikun");
}

TEST(abc008_problemB, case3) {
	check(string("") + "9\n" + "a\n" + "b\n" + "c\n" + "c\n" + "b\n" + "c\n" + "b\n" + "d\n" + "e",
		  string("") + "b", string("") + "c");
}
