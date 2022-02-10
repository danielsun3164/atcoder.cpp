#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc155C";

TEST(abc155C, case1) {
	check(PATH + COMMAND, string("") + "7\n" + "beat\n" + "vet\n" + "beet\n" + "bed\n" + "vet\n" + "bet\n" + "beet",
			string("") + "beet\n" + "vet");
}

TEST(abc155C, case2) {
	check(PATH + COMMAND,
			string("") + "8\n" + "buffalo\n" + "buffalo\n" + "buffalo\n" + "buffalo\n" + "buffalo\n" + "buffalo\n"
					+ "buffalo\n" + "buffalo", string("") + "buffalo");
}

TEST(abc155C, case3) {
	check(PATH + COMMAND, string("") + "7\n" + "bass\n" + "bass\n" + "kick\n" + "kick\n" + "bass\n" + "kick\n" + "kick",
			string("") + "kick");
}

TEST(abc155C, case4) {
	check(PATH + COMMAND, string("") + "4\n" + "ushi\n" + "tapu\n" + "nichia\n" + "kun",
			string("") + "kun\n" + "nichia\n" + "tapu\n" + "ushi");
}
