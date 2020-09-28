#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./problemC";

TEST(problemC, case1) {
	check(COMMAND, string("") + "5\n" + "North\n" + "North\n" + "East\n" + "South\n" + "West", string("") + "21");
}

TEST(problemC, case2) {
	check(COMMAND,
			string("") + "8\n" + "West\n" + "North\n" + "Left\n" + "South\n" + "Right\n" + "North\n" + "Left\n"
					+ "East", string("") + "34");
}
