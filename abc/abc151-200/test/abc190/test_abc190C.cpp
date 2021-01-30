#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc190C";

TEST(abc190C, case1) {
	check(COMMAND, string("") + "4 4\n" + "1 2\n" + "1 3\n" + "2 4\n" + "3 4\n" + "3\n" + "1 2\n" + "1 3\n" + "2 3",
			string("") + "2");
}

TEST(abc190C, case2) {
	check(COMMAND,
			string("") + "4 4\n" + "1 2\n" + "1 3\n" + "2 4\n" + "3 4\n" + "4\n" + "3 4\n" + "1 2\n" + "2 4\n" + "2 4",
			string("") + "4");
}

TEST(abc190C, case3) {
	check(COMMAND,
			string("") + "6 12\n" + "2 3\n" + "4 6\n" + "1 2\n" + "4 5\n" + "2 6\n" + "1 5\n" + "4 5\n" + "1 3\n"
					+ "1 2\n" + "2 6\n" + "2 3\n" + "2 5\n" + "5\n" + "3 5\n" + "1 4\n" + "2 6\n" + "4 6\n" + "5 6",
			string("") + "9");
}
