#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemC";

TEST(problemC, case1) {
	check(COMMAND, string("") + "MRL", string("") + "JOI");
}

TEST(problemC, case2) {
	check(COMMAND, string("") + "FURDWLD", string("") + "CROATIA");
}

TEST(problemC, case3) {
	check(COMMAND, string("") + "ABC", string("") + "XYZ");
}
