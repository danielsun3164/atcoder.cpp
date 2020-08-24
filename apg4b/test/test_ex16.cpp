#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex16";

TEST(ex16, case1) {
	check(COMMAND, string("") + "5 3 3 1 4", string("") + "YES");
}

TEST(ex16, case2) {
	check(COMMAND, string("") + "1 1 2 3 4", string("") + "YES");
}

TEST(ex16, case3) {
	check(COMMAND, string("") + "1 2 1 2 1", string("") + "NO");
}

TEST(ex16, case4) {
	check(COMMAND, string("") + "100 100 100 100 100", string("") + "YES");
}
