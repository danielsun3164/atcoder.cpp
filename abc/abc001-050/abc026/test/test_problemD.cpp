#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}
static const double TOLERANCE = 1E-6;
static const double EXPECTED = 100.0;

double f(int a, int b, int c, double t) {
	return a * t + b * sin(c * t * M_PI);
}

void check(int a, int b, int c) {
	string input = to_string(a) + " " + to_string(b) + " " + to_string(c);
	Command cmd = execute(input);
	streambuf *orig = cin.rdbuf();
	istringstream input_ss(cmd.StdOut);
	cin.rdbuf(input_ss.rdbuf());
	double output;
	cin >> output;
	double fn = f(a, b, c, output);
	EXPECT_TRUE(abs(fn - EXPECTED) < TOLERANCE);
	if (abs(fn - EXPECTED) >= TOLERANCE) {
		cout << "Output:" << endl;
		cout << fixed << setprecision(10) << output << endl;
		cout << "Actual:" << endl;
		cout << fixed << setprecision(10) << fn << endl;
		cout << "Expected:" << endl;
		cout << fixed << setprecision(10) << EXPECTED << endl;
		cout << "TOLERANCE" << endl;
		cout << defaultfloat << TOLERANCE << endl;
	}
	cin.rdbuf(orig);
}

TEST(abc026_problemD, case1) {
	check(1, 1, 1);
}

TEST(abc026_problemD, case2) {
	check(53, 82, 49);
}
