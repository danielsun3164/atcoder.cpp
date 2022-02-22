#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

void check(int n) {
	Command cmd = execute(PATH + COMMAND, to_string(n));
	int count = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			count++;
		}
	}
	EXPECT_TRUE(count > 1);
	istringstream out_input(cmd.StdOut);
	int k;
	out_input >> k;
	EXPECT_EQ(count, k + 1);
	int sum = 0;
	for (int i = 0; i < k; i++) {
		int a;
		out_input >> a;
		EXPECT_EQ(1, __builtin_popcount(a));
		sum += a;
	}
	EXPECT_EQ(n, sum);
}

TEST(problemA, case1) {
	check(5);
}

TEST(problemA, case2) {
	check(1);
}
