#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex3";

TEST(ex3, case1) {
	check(COMMAND, string(""), string("") + "5050");
}
