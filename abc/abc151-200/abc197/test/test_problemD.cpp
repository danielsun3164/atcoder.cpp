#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

const static int N = 2;

void check(string input, vector<double> expecteds) {
	Command cmd = execute(input + "\n");
	istringstream input_ss(cmd.StdOut);
	for (double expected : expecteds) {
		double output;
		input_ss >> output;
		EXPECT_TRUE(abs(output - expected) < TOLERANCE);
		if (abs(output - expected) >= TOLERANCE) {
			cout << "Actual:" << endl;
			cout << fixed << setprecision(10) << output << endl;
			cout << "Expected:" << endl;
			cout << fixed << setprecision(10) << expected << endl;
			cout << "TOLERANCE" << endl;
			cout << defaultfloat << TOLERANCE << endl;
		}
	}
}

void my_check(string input, string expected) {
	input.pop_back();
	istringstream expected_ss(expected);
	vector<double> expecteds(N);
	for (int i = 0; i < N; i++) {
		expected_ss >> expecteds[i];
	}
	check(input, expecteds);
}

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC197/D";
	FUNC = &my_check;
	TOLERANCE = 1E-5;
}

TEST(abc197_problemD, case1) {
	check(string("") + "4\n" + "1 1\n" + "2 2", vector<double>{2.0, 1.0});
}

TEST(abc197_problemD, case2) {
	check(string("") + "6\n" + "5 3\n" + "7 4", vector<double>{5.93301270189, 2.38397459622});
}
