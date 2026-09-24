#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC071/D";
}

TEST(abc058_problemD, case1) {
	check(string("") + "3 3\n" + "1 3 4\n" + "1 3 6", string("") + "60");
}

TEST(abc058_problemD, case2) {
	check(string("") + "6 5\n" + "-790013317 -192321079 95834122 418379342 586260100 802780784\n" +
			  "-253230108 193944314 363756450 712662868 735867677",
		  string("") + "835067060");
}
