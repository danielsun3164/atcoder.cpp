#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemD";

TEST(problemD, case1) {
	check(COMMAND, string("") + "ozRnonnoe", string("") + "zone");
}

TEST(problemD, case2) {
	check(COMMAND, string("") + "hellospaceRhellospace", string("") + "");
}
