#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(abc202_problemD, case1) {
	check(PATH + COMMAND, string("") + "2 2 4", string("") + "baab");
}

TEST(abc202_problemD, case2) {
	check(PATH + COMMAND, string("") + "30 30 118264581564861424",
			string("") + "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
}
