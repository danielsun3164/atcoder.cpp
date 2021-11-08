#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc008B";

TEST(abc008B, case1) {
	check(COMMAND, string("") + "4\n" + "taro\n" + "jiro\n" + "taro\n" + "saburo", string("") + "taro");
}

TEST(abc008B, case2) {
	check(COMMAND, string("") + "1\n" + "takahashikun", string("") + "takahashikun");
}

TEST(abc008B, case3) {
	check(COMMAND, string("") + "9\n" + "a\n" + "b\n" + "c\n" + "c\n" + "b\n" + "c\n" + "b\n" + "d\n" + "e",
			string("") + "b", string("") + "c");
}
