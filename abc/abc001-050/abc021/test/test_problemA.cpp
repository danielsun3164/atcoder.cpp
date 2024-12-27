#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

void check(int n) {
	Command cmd = execute(to_string(n));
	int count = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			count++;
		}
	}
	EXPECT_TRUE(count > 1);
	istringstream output_ss(cmd.StdOut);
	int k;
	output_ss >> k;
	EXPECT_EQ(count, k + 1);
	int sum = 0;
	for (int i = 0; i < k; i++) {
		int a;
		output_ss >> a;
		EXPECT_EQ(1, __builtin_popcount(a));
		sum += a;
	}
	EXPECT_EQ(n, sum);
}

TEST(abc021_problemA, case1) {
	check(5);
}

TEST(abc021_problemA, case2) {
	check(1);
}
