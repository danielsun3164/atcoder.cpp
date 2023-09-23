#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem012";
	EXTERNAL = "typical90/012";
}

TEST(typical90_problem012, case1) {
	check(
			string("") + "3 3\n" + "10\n" + "1 2 2\n" + "1 1 1\n" + "2 1 1 2 2\n" + "1 3 2\n" + "2 1 1 2 2\n"
					+ "2 2 2 3 2\n" + "1 2 3\n" + "1 2 1\n" + "2 1 1 2 2\n" + "2 1 1 3 3",
			string("") + "No\n" + "No\n" + "Yes\n" + "Yes\n" + "No");
}

TEST(typical90_problem012, case2) {
	check(string("") + "1 1\n" + "3\n" + "2 1 1 1 1\n" + "1 1 1\n" + "2 1 1 1 1", string("") + "No\n" + "Yes");
}

TEST(typical90_problem012, case3) {
	check(
			string("") + "5 5\n" + "42\n" + "2 3 4 3 4\n" + "2 3 2 3 2\n" + "1 4 1\n" + "2 4 1 2 2\n" + "1 1 2\n"
					+ "1 4 5\n" + "1 3 3\n" + "2 4 2 1 3\n" + "1 3 5\n" + "2 2 4 2 3\n" + "2 2 4 2 5\n" + "2 3 4 5 1\n"
					+ "2 3 1 2 2\n" + "2 3 1 1 2\n" + "2 2 4 5 2\n" + "2 3 2 5 3\n" + "1 4 3\n" + "2 3 3 3 5\n"
					+ "2 3 1 3 2\n" + "1 1 5\n" + "2 4 4 5 3\n" + "1 1 4\n" + "2 1 3 2 5\n" + "2 4 3 1 4\n"
					+ "2 2 3 3 3\n" + "1 2 1\n" + "1 2 5\n" + "2 1 4 5 3\n" + "2 4 4 2 5\n" + "2 4 2 2 4\n" + "1 2 2\n"
					+ "2 4 1 5 2\n" + "1 2 4\n" + "2 3 1 4 1\n" + "1 4 4\n" + "2 3 2 2 1\n" + "2 1 1 5 2\n" + "1 4 2\n"
					+ "2 4 2 3 5\n" + "1 3 2\n" + "1 3 4\n" + "1 2 3",
			string("") + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n"
					+ "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n" + "No\n"
					+ "No\n" + "No\n" + "No\n" + "Yes");
}
