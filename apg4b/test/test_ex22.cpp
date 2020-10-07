#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex22";

TEST(ex22, case1) {
	check(COMMAND, string("") + "3\n" + "5 2\n" + "2 7\n" + "4 1", string("") + "4 1\n" + "5 2\n" + "2 7");
}

TEST(ex22, case2) {
	check(COMMAND, string("") + "5\n" + "1 2\n" + "3 4\n" + "5 6\n" + "7 8\n" + "9 10",
			string("") + "1 2\n" + "3 4\n" + "5 6\n" + "7 8\n" + "9 10");
}
