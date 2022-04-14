#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "6 4\n" + "356 migoro\n" + "461 yoroi\n" + "2 ni\n" + "12 ini",
			string("") + "i\n" + "ni\n" + "mi\n" + "yo\n" + "go\n" + "ro",
			string("") + "i\n" + "ni\n" + "mig\n" + "yor\n" + "or\n" + "o");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "3 4\n" + "21 aaa\n" + "12 aaa\n" + "123 aaaaaa\n" + "13 aaaa",
			string("") + "a\n" + "aa\n" + "aaa");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "2 3\n" + "12211 abcaaaaabcabc\n" + "2121 aaabcaaabc\n" + "222221 aaaaaaaaaaabc",
			string("") + "abc\n" + "aa");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "2 1\n" + "12 abcab", string("") + "ab\n" + "cab", string("") + "abc\n" + "ab");
}
