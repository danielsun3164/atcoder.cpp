#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemC";

TEST(problemC, case1) {
	check(COMMAND, string("") + "5\n" + "1\n" + "7\n" + "9\n" + "6\n" + "10", string("") + "3\n" + "0");
}

TEST(problemC, case2) {
	check(COMMAND,
			string("") + "10\n" + "8\n" + "7\n" + "14\n" + "18\n" + "4\n" + "11\n" + "3\n" + "17\n" + "5\n" + "19",
			string("") + "2\n" + "0");
}
