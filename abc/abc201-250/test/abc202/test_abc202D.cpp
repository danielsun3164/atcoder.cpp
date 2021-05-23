#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc202D";

TEST(abc202D, case1) {
	check(COMMAND, string("") + "2 2 4", string("") + "baab");
}

TEST(abc202D, case2) {
	check(COMMAND, string("") + "30 30 118264581564861424",
			string("") + "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
}
