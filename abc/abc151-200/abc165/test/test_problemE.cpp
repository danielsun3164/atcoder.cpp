#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

void my_check(string input, __attribute__((unused))  string expected) {
	istringstream input_ss(input);
	int n, m;
	input_ss >> n >> m;
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	set<int> a_set, b_set, d_set;
	for (int i = 0; i < m; i++) {
		int a, b;
		output_ss >> a >> b;
		int d = abs(a - b);
		EXPECT_EQ(a_set.end(), a_set.find(a));
		EXPECT_EQ(b_set.end(), b_set.find(b));
		EXPECT_EQ(d_set.end(), d_set.find(d));
		a_set.insert(a);
		b_set.insert(b);
		d_set.insert(d);
	}
}

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC165/E";
	FUNC = &my_check;
}

TEST(abc165_problemE, case1) {
	check(string("") + "4 1", string("") + "2 3");
}

TEST(abc165_problemE, case2) {
	check(string("") + "7 3", string("") + "1 3\n" + "4 7\n" + "5 6", string("") + "1 6\n" + "2 5\n" + "3 4");
}
