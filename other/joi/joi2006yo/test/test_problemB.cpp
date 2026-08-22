#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "joi2006yo/B";
}

TEST(joi2006yo_problemB, case1) {
	check(string("") + "3\n" + "A a\n" + "0 5\n" + "5 4\n" + "10\n" + "A\n" + "B\n" + "C\n" +
			  "0\n" + "1\n" + "4\n" + "5\n" + "a\n" + "b\n" + "A",
		  string("") + "aBC5144aba");
}
