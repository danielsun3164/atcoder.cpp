#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemA";

TEST(problemA, case1) {
	check(COMMAND, string("") + "5 3\n" + "2\n" + "5\n" + "-4\n" + "10\n" + "3", string("") + "11");
}
