#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc193C";

TEST(abc193C, case1) {
	check(COMMAND, string("") + "8", string("") + "6");
}

TEST(abc193C, case2) {
	check(COMMAND, string("") + "100000", string("") + "99634");
}
