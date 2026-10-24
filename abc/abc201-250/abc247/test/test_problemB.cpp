#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc247/B";
}

TEST(abc247_problemB, case1) {
	check(string("") + "3\n" + "tanaka taro\n" + "tanaka jiro\n" + "suzuki hanako",
		  string("") + "Yes");
}

TEST(abc247_problemB, case2) {
	check(string("") + "3\n" + "aaa bbb\n" + "xxx aaa\n" + "bbb yyy", string("") + "No");
}

TEST(abc247_problemB, case3) {
	check(string("") + "2\n" + "tanaka taro\n" + "tanaka taro", string("") + "No");
}

TEST(abc247_problemB, case4) {
	check(string("") + "3\n" + "takahashi chokudai\n" + "aoki kensho\n" + "snu ke",
		  string("") + "Yes");
}
