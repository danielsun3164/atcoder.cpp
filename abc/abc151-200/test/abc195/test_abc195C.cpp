#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc195C";

TEST(abc195C, case1) {
	check(COMMAND, string("") + "1010", string("") + "11");
}

TEST(abc195C, case2) {
	check(COMMAND, string("") + "27182818284590", string("") + "107730272137364");
}
