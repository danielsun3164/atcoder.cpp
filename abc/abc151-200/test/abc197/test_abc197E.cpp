#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc197E";

TEST(abc197E, case1) {
	check(COMMAND, string("") + "5\n" + "2 2\n" + "3 1\n" + "1 3\n" + "4 2\n" + "5 3", string("") + "12");
}

TEST(abc197E, case2) {
	check(COMMAND,
			string("") + "9\n" + "5 5\n" + "-4 4\n" + "4 3\n" + "6 3\n" + "-5 5\n" + "-3 2\n" + "2 2\n" + "3 3\n"
					+ "1 4", string("") + "38");
}
