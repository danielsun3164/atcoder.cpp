#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem046";
	EXTERNAL = "typical90/046";
}

TEST(typical90_problem046, case1) {
	check(string("") + "3\n" + "10 13 93\n" + "5 27 35\n" + "55 28 52", string("") + "3");
}

TEST(typical90_problem046, case2) {
	check(string("") + "3\n" + "10 56 102\n" + "16 62 108\n" + "20 66 112", string("") + "27");
}

TEST(typical90_problem046, case3) {
	check(string("") + "20\n" +
			  "238 395 46 238 264 114 354 52 324 14 472 64 307 280 209 24 165 194 179 248\n" +
			  "270 83 377 332 173 21 362 75 66 342 229 117 124 481 48 235 376 13 420 74\n" +
			  "175 427 76 278 486 169 311 47 348 225 41 482 355 356 263 95 170 156 340 289",
		  string("") + "183");
}
