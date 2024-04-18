#include <bits/stdc++.h>
using namespace std;

const static string BASE = "WBWBWWBWBWBW";
const static string BASE3 = BASE + BASE + BASE;

int main(void) {
	string s;
	cin >> s;
	map<int, string> INDEX_MAP { { 0, "Do" }, { 2, "Re" }, { 4, "Mi" }, { 5, "Fa" }, { 7, "So" }, { 9, "La" }, { 11,
			"Si" } };
	cout << INDEX_MAP[int(BASE3.find(s))] << endl;
	return 0;
}
