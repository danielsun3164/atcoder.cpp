#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc206F";

TEST(abc206F, case1) {
	check(COMMAND,
			string("") + "5\n" + "3\n" + "53 98\n" + "8 43\n" + "12 53\n" + "10\n" + "4 7\n" + "5 7\n" + "3 7\n"
					+ "4 5\n" + "5 8\n" + "6 9\n" + "4 8\n" + "5 10\n" + "1 9\n" + "5 10\n" + "2\n" + "58 98\n"
					+ "11 29\n" + "6\n" + "79 83\n" + "44 83\n" + "38 74\n" + "49 88\n" + "18 45\n" + "64 99\n" + "1\n"
					+ "5 9", string("") + "Bob\n" + "Alice\n" + "Bob\n" + "Alice\n" + "Alice");
}
