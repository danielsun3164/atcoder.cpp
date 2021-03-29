#include <command.h>
#include <gtest/gtest.h>
#include <string>

using namespace std;

static const string COMMAND = "./problemF_salt";

TEST(problemF, case1) {
	Command cmd = execute(COMMAND, string("") + "7\n" + "3 4\n" + "5 7\n" + "4 6\n" + "2 4\n" + "1 4\n" + "1 7"); // @suppress("Invalid arguments")
	int last1 = cmd.StdErr.find_last_of("\n");
	int last2 = cmd.StdErr.find_last_of("\n", last1 - 2);
	EXPECT_EQ("AC: player won", cmd.StdErr.substr(last2 + 1, last1 - last2 - 1));
}
