#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
#include <atcoder/dsu>

using namespace std;

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result;
	expected_ss >> result;
	if (-1 == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n, m;
		input_ss >> n >> m;
		set<int> a_set;
		for (int i = 0; i < m; i++) {
			int a;
			input_ss >> a;
			a_set.insert(a);
		}
		Command cmd = execute(input);
		istringstream output_ss1(cmd.StdOut), output_ss2(cmd.StdOut);
		vector<string> v;
		string buf;
		while (getline(output_ss1, buf)) {
			v.push_back(buf);
		}
		EXPECT_EQ(n - 1, v.size());
		atcoder::dsu d(n);
		for (int i = 0; i < n - 1; i++) {
			int u, v;
			output_ss2 >> u >> v;
			EXPECT_EQ(a_set.end(), a_set.find(u ^ v));
			EXPECT_FALSE(d.same(u, v));
			d.merge(u, v);
		}
		EXPECT_EQ(1, d.groups().size());
	}
}

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ZONe2021/F";
	FUNC = &my_check;
}

TEST(zone2021_problemE, case1) {
	my_check(string("") + "4 1\n" + "3", string("") + "0 1\n" + "2 3\n" + "0 2");
}

TEST(zone2021_problemE, case2) {
	my_check(string("") + "8 0\n" + "",
			 string("") + "0 1\n" + "2 3\n" + "4 5\n" + "6 7\n" + "0 2\n" + "4 6\n" + "0 4");
}

TEST(zone2021_problemE, case3) {
	check(string("") + "8 7\n" + "1 2 3 4 5 6 7", string("") + "-1");
}
