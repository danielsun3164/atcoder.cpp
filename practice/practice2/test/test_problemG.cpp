#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemG";

TEST(problemG, case1) {
	check(COMMAND, string("") + "6 7\n" + "1 4\n" + "5 2\n" + "3 0\n" + "5 5\n" + "4 1\n" + "0 3\n" + "4 2",
			string("") + "4\n" + "1 5\n" + "2 1 4\n" + "1 2\n" + "2 0 3");
}
