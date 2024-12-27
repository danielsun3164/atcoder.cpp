#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

void check(string s) {
	Command cmd = execute(s);
	istringstream output_ss(cmd.StdOut);
	int a, b, n = s.size();
	output_ss >> a >> b;
	EXPECT_TRUE((a >= 1) && (a <= n));
	EXPECT_TRUE((b >= 1) && (b <= n));
	EXPECT_TRUE(a < b);
	map<char, int> mp;
	for (int i = a - 1; i <= b - 1; i++) {
		mp[s[i]]++;
	}
	int count = 0;
	for (auto [c, i] : mp) {
		count = max(count, i);
	}
	EXPECT_TRUE(count > (b - a + 1) >> 1);
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result1, result2;
	expected_ss >> result1 >> result2;
	if ((-1 == result1) && (-1 == result2)) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		string s;
		input_ss >> s;
		check(s);
	}
}

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC059_ABC043/D";
	FUNC = &my_check;
}

TEST(abc043_problemD, case1) {
	check("needed");
}

TEST(abc043_problemD, case2) {
	check(string("") + "atcoder", string("") + "-1 -1");
}
