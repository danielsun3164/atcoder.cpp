#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "ABC155/D";
}

TEST(abc155_problemD, case1) {
	check(string("") + "4 3\n" + "3 3 -4 -2", string("") + "-6");
}

TEST(abc155_problemD, case2) {
	check(string("") + "10 40\n" + "5 4 3 2 -1 0 0 0 0 0", string("") + "6");
}

TEST(abc155_problemD, case3) {
	check(
			string("") + "30 413\n"
					+ "-170202098 -268409015 537203564 983211703 21608710 -443999067 -937727165 -97596546 -372334013 398994917 -972141167 798607104 -949068442 -959948616 37909651 0 886627544 -20098238 0 -948955241 0 -214720580 277222296 -18897162 834475626 0 -425610555 110117526 663621752 0",
			string("") + "448283280358331064");
}
