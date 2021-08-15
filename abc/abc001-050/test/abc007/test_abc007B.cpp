#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc007B";

void check(string input) {
	Command cmd = execute(COMMAND, input); // @suppress("Invalid arguments")
	streambuf *orig = cin.rdbuf();
	istringstream input_ss(cmd.StdOut);
	cin.rdbuf(input_ss.rdbuf());
	string output;
	cin >> output;
	EXPECT_TRUE(output < input);
	if (output >= input) {
		cout << "output=" << output << ", input=" << input << endl;
	}
	cin.rdbuf(orig);
}

TEST(abc007B, case1) {
	check("xyz");
}

TEST(abc007B, case2) {
	check("c");
}

TEST(abc007B, case3) {
	check(COMMAND, string("") + "a", string("") + "-1");
}

TEST(abc007B, case4) {
	check("aaaaa");
}
