#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc200B";

TEST(abc200B, case1) {
	check(COMMAND, string("") + "2021 4", string("") + "50531");
}

TEST(abc200B, case2) {
	check(COMMAND, string("") + "40000 2", string("") + "1");
}

TEST(abc200B, case3) {
	check(COMMAND, string("") + "8691 20", string("") + "84875488281");
}
