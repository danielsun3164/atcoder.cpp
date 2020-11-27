#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemE";

TEST(problemE, case1) {
	check(COMMAND, string("") + "2 2 2\n" + "4\n" + "2 4 5 0\n" + "2 3 6 0\n" + "1 4 5 0\n" + "2 3 5 1",
			string("") + "2\n" + "1\n" + "1\n" + "0\n" + "1\n" + "0");
}
