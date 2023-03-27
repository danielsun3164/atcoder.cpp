#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc216_problemB, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "tanaka taro\n" + "sato hanako\n" + "tanaka taro", string("") + "Yes");
}

TEST(abc216_problemB, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "saito ichiro\n" + "saito jiro\n" + "saito saburo", string("") + "No");
}

TEST(abc216_problemB, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "sypdgidop bkseq\n" + "bajsqz hh\n" + "ozjekw mcybmtt\n" + "qfeysvw dbo",
			string("") + "No");
}
