#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

void check(int n, int q, vector<int> a, vector<int> x, vector<int> y) {
	string input = to_string(n) + " " + to_string(q) + "\n";
	for (int i = 0; i < n; i++) {
		input += (i ? " " : "") + to_string(a[i]);
	}
	input += "\n";
	for (int i = 0; i < q; i++) {
		input += to_string(x[i]) + " " + to_string(y[i]) + "\n";
	}
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	int nb, nc, b_sum = 0, c_sum = 0;
	set<int> b, c;
	output_ss >> nb;
	EXPECT_TRUE(nb > 0);
	for (int i = 0; i < nb; i++) {
		int bi;
		output_ss >> bi;
		EXPECT_EQ(b.end(), b.find(bi));
		b.insert(bi);
		b_sum += a[bi - 1];
	}
	output_ss >> nc;
	EXPECT_TRUE(nc > 0);
	for (int i = 0; i < nc; i++) {
		int ci;
		output_ss >> ci;
		EXPECT_EQ(c.end(), c.find(ci));
		c.insert(ci);
		c_sum += a[ci - 1];
	}
	EXPECT_NE(b, c);
	for (int i = 0; i < q; i++) {
		EXPECT_FALSE((b.end() != b.find(x[i])) && (b.end() != b.find(y[i])));
		EXPECT_FALSE((c.end() != c.find(x[i])) && (c.end() != c.find(y[i])));
	}
	EXPECT_EQ(b_sum, c_sum);
}

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	int n, q;
	input_ss >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		input_ss >> a[i];
	}
	vector<int> x(q), y(q);
	for (int i = 0; i < q; i++) {
		input_ss >> x[i] >> y[i];
	}
	check(n, q, a, x, y);
}

static_block {
	COMMAND = "problem088";
	EXTERNAL = "typical90/088";
	FUNC = &my_check;
}

TEST(typical90_problem088, case1) {
	check(5, 2, vector<int>{3, 1, 3, 2, 3}, vector<int>{1, 1}, vector<int>{2, 4});
}

TEST(typical90_problem088, case2) {
	check(10, 10, vector<int>{2, 5, 7, 8, 11, 10, 1, 88, 86, 50},
		  vector<int>{1, 1, 1, 1, 1, 5, 6, 2, 9, 7}, vector<int>{2, 3, 4, 5, 6, 10, 10, 3, 10, 8});
}
