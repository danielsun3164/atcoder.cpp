#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemK";

TEST(problemK, case1) {
	check(COMMAND,
			string("") + "5 7\n" + "1 2 3 4 5\n" + "1 0 5\n" + "0 2 4 100 101\n" + "1 0 3\n" + "0 1 3 102 103\n"
					+ "1 2 5\n" + "0 2 5 104 105\n" + "1 0 5", string("") + "15\n" + "404\n" + "41511\n" + "4317767");
}
