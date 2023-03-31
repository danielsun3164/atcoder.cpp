#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem027";
}

TEST(typical90_problem027, case1) {
	check(string("") + "5\n" + "e869120\n" + "atcoder\n" + "e869120\n" + "square1001\n" + "square1001",
			string("") + "1\n" + "2\n" + "4");
}

TEST(typical90_problem027, case2) {
	check(string("") + "4\n" + "taro\n" + "hanako\n" + "yuka\n" + "takashi", string("") + "1\n" + "2\n" + "3\n" + "4");
}

TEST(typical90_problem027, case3) {
	check(
			string("") + "10\n" + "square869120\n" + "square869120\n" + "square869120\n" + "square869120\n"
					+ "square869120\n" + "square869120\n" + "square869120\n" + "square869120\n" + "square869120\n"
					+ "square869120", string("") + "1");
}
