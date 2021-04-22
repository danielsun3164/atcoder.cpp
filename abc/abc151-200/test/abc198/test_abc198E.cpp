#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc198E";

TEST(abc198E, case1) {
	check(COMMAND, string("") + "6\n" + "2 7 1 8 2 8\n" + "1 2\n" + "3 6\n" + "3 2\n" + "4 3\n" + "2 5",
			string("") + "1\n" + "2\n" + "3\n" + "4\n" + "6");
}

TEST(abc198E, case2) {
	check(COMMAND,
			string("") + "10\n" + "3 1 4 1 5 9 2 6 5 3\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "5 6\n" + "6 7\n"
					+ "7 8\n" + "8 9\n" + "9 10", string("") + "1\n" + "2\n" + "3\n" + "5\n" + "6\n" + "7\n" + "8");
}
