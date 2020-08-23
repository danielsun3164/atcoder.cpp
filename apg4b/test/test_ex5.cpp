#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex5";

TEST(ex5, case1) {
	check(COMMAND, string("") + "1 2", string("") + "3");
}

TEST(ex5, case2) {
	check(COMMAND, string("") + "100 99", string("") + "199");
}
