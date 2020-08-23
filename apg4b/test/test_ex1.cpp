#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex1";

TEST(ex1, case1) {
	check(COMMAND, string(""), string("") + "こんにちは\n" + "AtCoder");
}
