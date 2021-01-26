#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc002D";

TEST(abc002D, case1) {
	check(COMMAND, string("") + "5 3\n" + "1 2\n" + "2 3\n" + "1 3", string("") + "3");
}

TEST(abc002D, case2) {
	check(COMMAND, string("") + "5 3\n" + "1 2\n" + "2 3\n" + "3 4", string("") + "2");
}

TEST(abc002D, case3) {
	check(COMMAND,
			string("") + "7 9\n" + "1 2\n" + "1 3\n" + "2 3\n" + "4 5\n" + "4 6\n" + "4 7\n" + "5 6\n" + "5 7\n"
					+ "6 7", string("") + "4");
}

TEST(abc002D, case4) {
	check(COMMAND, string("") + "12 0", string("") + "1");
}
