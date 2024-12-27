#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;
using ll = long long;

static_block {
	COMMAND = "problem013";
}

void check(ll n, vector<ll> expected) {
	Command cmd = execute(to_string(n));
	int count = 0, m = expected.size();
	for (char c : cmd.StdOut) {
		if ('\n' == c) {
			count++;
		}
	}
	EXPECT_EQ(expected.size(), count);
	istringstream output_ss(cmd.StdOut);
	vector<ll> actual;
	for (int i = 0; i < m; i++) {
		ll l;
		output_ss >> l;
		EXPECT_EQ(actual.end(), find(actual.begin(), actual.end(), l));
		actual.emplace_back(l);
	}
	sort(actual.begin(), actual.end());
	EXPECT_EQ(expected, actual);
}

TEST(math_and_algorithm_problem013, case1) {
	check(12, vector<ll>{1, 2, 3, 4, 6, 12});
}

TEST(math_and_algorithm_problem013, case2) {
	check(827847039317LL, vector<ll>{1, 909859, 909863, 827847039317LL});
}
