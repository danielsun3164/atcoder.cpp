#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

const static string UNSOLVABLE = "UNSOLVABLE";
const static int N = 3;

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	string result;
	expected_ss >> result;
	if (UNSOLVABLE == result) {
		check_from_file(input, expected);
	} else {
		Command cmd = execute(input);
		istringstream input_ss(input), output_ss(cmd.StdOut);
		string buf;
		vector<string> input_v, output_v;
		while (getline(input_ss, buf)) {
			input_v.push_back(buf);
		}
		while (getline(output_ss, buf)) {
			output_v.push_back(buf);
		}
		EXPECT_EQ(N, output_v.size());
		map<char, char> mp;
		for (int i = 0; i < N; i++) {
			EXPECT_EQ(input_v[i].size(), output_v[i].size());
			for (int j = 0; j < int(input_v[i].size()); j++) {
				if (mp.end() == mp.find(input_v[i][j])) {
					mp[input_v[i][j]] = output_v[i][j];
				} else {
					EXPECT_EQ(mp[input_v[i][j]], output_v[i][j]);
				}
			}
		}
		EXPECT_EQ(stoll(output_v[2]), stoll(output_v[0]) + stoll(output_v[1]));
	}
}

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc198/D";
	FUNC = &my_check;
}

TEST(abc198_problemD, case1) {
	check(string("") + "a\n" + "b\n" + "c", string("") + "1\n" + "2\n" + "3");
}

TEST(abc198_problemD, case2) {
	check(string("") + "x\n" + "x\n" + "y", string("") + "1\n" + "1\n" + "2");
}

TEST(abc198_problemD, case3) {
	check(string("") + "p\n" + "q\n" + "p", string("") + "UNSOLVABLE");
}

TEST(abc198_problemD, case4) {
	check(string("") + "abcd\n" + "efgh\n" + "ijkl", string("") + "UNSOLVABLE");
}

TEST(abc198_problemD, case5) {
	check(string("") + "send\n" + "more\n" + "money", string("") + "9567\n" + "1085\n" + "10652");
}
