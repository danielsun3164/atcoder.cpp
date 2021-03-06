#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemA";

TEST(problemA, case1) {
	check(COMMAND, string("") + "100 80 70 60\n" + "80 70 80 90", string("") + "320");
}

TEST(problemA, case2) {
	check(COMMAND, string("") + "100 80 70 60\n" + "80 70 60 100", string("") + "310");
}
