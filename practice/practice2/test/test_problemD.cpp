#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemD";

TEST(problemD, case1) {
	check(COMMAND, string("") + "3 3\n" + "#..\n" + "..#\n" + "...", string("") + "3\n" + "#><\n" + "vv#\n" + "^^.", // @suppress("Invalid arguments")
	string("") + "3\n" + "#><\n" + "v.#\n" + "^><", string("") + "3\n" + "#><\n" + "><#\n" + "><.");
}
