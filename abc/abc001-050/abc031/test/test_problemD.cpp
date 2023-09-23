#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc031_problemD, case1) {
	check(string("") + "6 4\n" + "356 migoro\n" + "461 yoroi\n" + "2 ni\n" + "12 ini",
			string("") + "i\n" + "ni\n" + "mi\n" + "yo\n" + "go\n" + "ro",
			string("") + "i\n" + "ni\n" + "mig\n" + "yor\n" + "or\n" + "o");
}

TEST(abc031_problemD, case2) {
	check(string("") + "3 4\n" + "21 aaa\n" + "12 aaa\n" + "123 aaaaaa\n" + "13 aaaa",
			string("") + "a\n" + "aa\n" + "aaa");
}

TEST(abc031_problemD, case3) {
	check(string("") + "2 3\n" + "12211 abcaaaaabcabc\n" + "2121 aaabcaaabc\n" + "222221 aaaaaaaaaaabc",
			string("") + "abc\n" + "aa");
}

TEST(abc031_problemD, case4) {
	check(string("") + "2 1\n" + "12 abcab", string("") + "ab\n" + "cab", string("") + "abc\n" + "ab");
}
