#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemD";

TEST(problemD, case1) {
	check(COMMAND, string("") + "2\n" + "2\n" + "1\n" + "0", string("") + "2\n" + "4\n" + "3\n" + "1");
}

TEST(problemD, case2) {
	check(COMMAND, string("") + "3\n" + "4\n" + "2\n" + "4\n" + "0\n" + "0",
			string("") + "1\n" + "5\n" + "4\n" + "3\n" + "2\n" + "6");
}
