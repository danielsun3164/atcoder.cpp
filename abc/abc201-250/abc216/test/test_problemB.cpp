#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc216/B";
}

TEST(abc216_problemB, case1) {
	check(string("") + "3\n" + "tanaka taro\n" + "sato hanako\n" + "tanaka taro",
		  string("") + "Yes");
}

TEST(abc216_problemB, case2) {
	check(string("") + "3\n" + "saito ichiro\n" + "saito jiro\n" + "saito saburo",
		  string("") + "No");
}

TEST(abc216_problemB, case3) {
	check(string("") + "4\n" + "sypdgidop bkseq\n" + "bajsqz hh\n" + "ozjekw mcybmtt\n" +
			  "qfeysvw dbo",
		  string("") + "No");
}
