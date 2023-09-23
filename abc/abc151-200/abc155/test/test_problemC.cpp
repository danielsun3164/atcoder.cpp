#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC155/C";
}

TEST(abc155_problemC, case1) {
	check(string("") + "7\n" + "beat\n" + "vet\n" + "beet\n" + "bed\n" + "vet\n" + "bet\n" + "beet",
			string("") + "beet\n" + "vet");
}

TEST(abc155_problemC, case2) {
	check(
			string("") + "8\n" + "buffalo\n" + "buffalo\n" + "buffalo\n" + "buffalo\n" + "buffalo\n" + "buffalo\n"
					+ "buffalo\n" + "buffalo", string("") + "buffalo");
}

TEST(abc155_problemC, case3) {
	check(string("") + "7\n" + "bass\n" + "bass\n" + "kick\n" + "kick\n" + "bass\n" + "kick\n" + "kick",
			string("") + "kick");
}

TEST(abc155_problemC, case4) {
	check(string("") + "4\n" + "ushi\n" + "tapu\n" + "nichia\n" + "kun",
			string("") + "kun\n" + "nichia\n" + "tapu\n" + "ushi");
}
