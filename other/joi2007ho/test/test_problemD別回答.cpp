#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemD別回答";

TEST(problemD, case1) {
	check(COMMAND, string("") + "4\n" + "5\n" + "1 2\n" + "3 1\n" + "3 2\n" + "3 4\n" + "4 1",
			string("") + "3\n" + "4\n" + "1\n" + "2\n" + "0");
}

TEST(problemD, case2) {
	check(COMMAND, string("") + "3\n" + "2\n" + "2 1\n" + "2 3", string("") + "2\n" + "1\n" + "3\n" + "1", // @suppress("Invalid arguments")
	string("") + "2\n" + "3\n" + "1\n" + "1");
}
