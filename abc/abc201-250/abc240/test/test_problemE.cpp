#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void dfs(vector<vector<int>> &edges, vector<bool> &checked, vector<int> &l, vector<int> &r, int now,
		 int prev) {
	if (-1 != prev) {
		EXPECT_TRUE((l[prev] <= l[now]) && (r[now] <= r[prev]));
	}
	checked[now] = true;
	for (int next : edges[now]) {
		if (!checked[next]) {
			dfs(edges, checked, l, r, next, now);
		}
	}
}

void check(int n, vector<int> &a, vector<int> &b, vector<int> &diff, int expected_max) {
	string input = to_string(n) + "\n";
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		input += to_string(a[i]) + " " + to_string(b[i]) + "\n";
		edges[a[i] - 1].emplace_back(b[i] - 1);
		edges[b[i] - 1].emplace_back(a[i] - 1);
	}
	Command cmd = execute(input);
	int count = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			count++;
		}
	}
	EXPECT_EQ(n, count);
	istringstream output_ss(cmd.StdOut);
	vector<int> l(n), r(n);
	int actual_max = 0;
	for (int i = 0; i < n; i++) {
		output_ss >> l[i] >> r[i];
		actual_max = max(actual_max, max(l[i], r[i]));
		EXPECT_EQ(diff[i], r[i] - l[i]);
	}
	EXPECT_EQ(expected_max, actual_max);
	vector<bool> checked(n, false);
	for (int i = 0; i < n; i++) {
		if (!checked[i]) {
			dfs(edges, checked, l, r, i, -1);
		}
	}
}

void my_check(string input, string expected) {
	istringstream input_ss(input);
	istringstream expected_ss(expected);
	int n;
	input_ss >> n;
	vector<int> a(n - 1), b(n - 1);
	for (int i = 0; i < n - 1; i++) {
		input_ss >> a[i] >> b[i];
	}
	vector<int> diff(n);
	int expected_max = 0;
	for (int i = 0; i < n; i++) {
		int l, r;
		expected_ss >> l >> r;
		diff[i] = r - l;
		expected_max = max(expected_max, max(l, r));
	}
	check(n, a, b, diff, expected_max);
}

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc240/E";
	FUNC = &my_check;
}

TEST(abc240_problemE, case1) {
	vector<int> a = {2, 3}, b = {1, 1}, diff = {1, 0, 0};
	check(3, a, b, diff, 2);
}

TEST(abc240_problemE, case2) {
	vector<int> a = {3, 5, 1, 1}, b = {4, 4, 2, 4}, diff = {2, 0, 0, 1, 0};
	check(5, a, b, diff, 3);
}

TEST(abc240_problemE, case3) {
	vector<int> a = {4, 3, 5, 3}, b = {5, 2, 2, 1}, diff = {0, 0, 0, 0, 0};
	check(5, a, b, diff, 1);
}
