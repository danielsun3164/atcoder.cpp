#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc186C";

TEST(abc186C, case1) {
	check(COMMAND, string("") + "20", string("") + "17");
}

TEST(abc186C, case2) {
	check(COMMAND, string("") + "100000", string("") + "30555");
}
