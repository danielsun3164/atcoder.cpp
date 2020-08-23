#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND="./ex6"; 

TEST(ex6, case1) {
	check(COMMAND, string("") + "1 + 2", string("") + "3");
}

TEST(ex6, case2) {
	check(COMMAND, string("") + "5 - 3", string("") + "2");
}

TEST(ex6, case3) {
	check(COMMAND, string("") + "10 * 20", string("") + "200");
}

TEST(ex6, case4) {
	check(COMMAND, string("") + "10 / 3", string("") + "3");
}

TEST(ex6, case5) {
	check(COMMAND, string("") + "100 / 0", string("") + "error");
}

TEST(ex6, case6) {
	check(COMMAND, string("") + "25 ? 31", string("") + "error");
}

TEST(ex6, case7) {
	check(COMMAND, string("") + "0 + 0", string("") + "0");
}
