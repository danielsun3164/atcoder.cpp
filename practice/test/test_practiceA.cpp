#include <gtest/gtest.h>
#include <string>

#include "command.h"

static const std::string COMMAND = "./practiceA";

TEST(practiceA, case1) {
	check(COMMAND, std::string("") + "1\n" + "2 3" + "test\n", "6 test");
}

TEST(practiceA, case2) {
	check(COMMAND, std::string("") + "72\n" + "128 256\n" + "myonmyon", "456 myonmyon");
}
