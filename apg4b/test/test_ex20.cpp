#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex20";

TEST(ex20, case1) {
	check(COMMAND, string("") + "6\n" + "0 0 1 1 4", string("") + "6\n" + "4\n" + "1\n" + "1\n" + "2\n" + "1");
}

TEST(ex20, case2) {
	check(COMMAND, string("") + "8\n" + "0 0 1 2 0 3 6",
			string("") + "8\n" + "4\n" + "2\n" + "3\n" + "1\n" + "1\n" + "2\n" + "1");
}
