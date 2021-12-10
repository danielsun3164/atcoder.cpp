#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc197D";

static const double TOLERANCE = 1E-5;

template<typename ... Args>
void check(string input, const Args ... args) {
	Command cmd = execute(COMMAND, input); // @suppress("Invalid arguments")
	streambuf *orig = cin.rdbuf();
	istringstream input_ss(cmd.StdOut);
	cin.rdbuf(input_ss.rdbuf());
	vector<double> expecteds = { args... };
	for (double expected : expecteds) {
		double output;
		cin >> output;
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
	cin.rdbuf(orig);
}

TEST(abc197D, case1) {
	check(string("") + "4\n" + "1 1\n" + "2 2", 2.0, 1.0);
}

TEST(abc197D, case2) {
	check(string("") + "6\n" + "5 3\n" + "7 4", 5.93301270189, 2.38397459622);
}

