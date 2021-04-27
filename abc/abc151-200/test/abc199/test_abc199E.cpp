#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc199E";

TEST(abc199E, case1) {
	check(COMMAND, string("") + "3 1\n" + "2 2 1", string("") + "4");
}

TEST(abc199E, case2) {
	check(COMMAND, string("") + "5 2\n" + "3 3 2\n" + "4 4 3", string("") + "90");
}

TEST(abc199E, case3) {
	check(COMMAND, string("") + "18 0", string("") + "6402373705728000");
}
