#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex12";

TEST(ex12, case1) {
	check(COMMAND, string("") + "1+1+1-1", string("") + "2");
}

TEST(ex12, case2) {
	check(COMMAND, string("") + "1-1-1-1-1-1", string("") + "-4");
}

TEST(ex12, case3) {
	check(COMMAND, string("") + "1", string("") + "1");
}

TEST(ex12, case4) {
	check(COMMAND, string("") + "1-1-1+1+1+1+1-1+1-1+1-1+1", string("") + "3");
}
