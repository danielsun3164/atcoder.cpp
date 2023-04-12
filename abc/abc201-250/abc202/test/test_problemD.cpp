#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc202/D";
}

TEST(abc202_problemD, case1) {
	check(string("") + "2 2 4", string("") + "baab");
}

TEST(abc202_problemD, case2) {
	check(string("") + "30 30 118264581564861424",
			string("") + "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
}
