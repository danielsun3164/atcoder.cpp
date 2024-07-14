#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

const static string SATISFIABLE = "satisfiable";

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	string result;
	expected_ss >> result;
	if (SATISFIABLE == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n;
		input_ss >> n;
		set<string> st;
		for (int i = 0; i < n; i++) {
			string s;
			input_ss >> s;
			st.insert(s);
		}
		Command cmd = execute(input);
		istringstream output_ss(cmd.StdOut);
		output_ss >> result;
		EXPECT_NE(st.end(), st.find(result));
		EXPECT_NE(st.end(), st.find("!" + result));
	}
}

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC187/C";
	FUNC = &my_check;
}

TEST(abc187_problemC, case1) {
	check(string("") + "6\n" + "a\n" + "!a\n" + "b\n" + "!c\n" + "d\n" + "!d", string("") + "a",
		  string("") + "d");
}

TEST(abc187_problemC, case2) {
	check(string("") + "10\n" + "red\n" + "red\n" + "red\n" + "!orange\n" + "yellow\n" + "!blue\n" +
			  "cyan\n" + "!green\n" + "brown\n" + "!gray",
		  string("") + "satisfiable");
}
