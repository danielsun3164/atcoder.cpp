#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc190D";

TEST(abc190D, case1) {
	check(COMMAND, string("") + "12", string("") + "4");
}

TEST(abc190D, case2) {
	check(COMMAND, string("") + "1", string("") + "2");
}

TEST(abc190D, case3) {
	check(COMMAND, string("") + "963761198400", string("") + "1920");
}
