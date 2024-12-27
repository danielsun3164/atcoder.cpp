#include <bits/stdc++.h>
using namespace std;

const vector<string> DIRS = {"N",	"NNE", "NE",  "ENE", "E",	"ESE", "SE",  "SSE", "S",
							 "SSW", "SW",  "WSW", "W",	 "WNW", "NW",  "NNW", "N"};

int main(void) {
	int deg, dis, w;
	cin >> deg >> dis;
	int n = (deg * 2 + 225) / 450;
	if (dis < 15) {
		w = 0;
	} else if ((dis >= 15) && (dis < 93)) {
		w = 1;
	} else if ((dis >= 93) && (dis < 201)) {
		w = 2;
	} else if ((dis >= 201) && (dis < 327)) {
		w = 3;
	} else if ((dis >= 327) && (dis < 477)) {
		w = 4;
	} else if ((dis >= 477) && (dis < 645)) {
		w = 5;
	} else if ((dis >= 645) && (dis < 831)) {
		w = 6;
	} else if ((dis >= 831) && (dis < 1029)) {
		w = 7;
	} else if ((dis >= 1029) && (dis < 1245)) {
		w = 8;
	} else if ((dis >= 1245) && (dis < 1467)) {
		w = 9;
	} else if ((dis >= 1467) && (dis < 1707)) {
		w = 10;
	} else if ((dis >= 1707) && (dis < 1959)) {
		w = 11;
	} else {
		w = 12;
	}
	cout << ((0 == w) ? "C" : DIRS[n]) << " " << w << endl;
	return 0;
}
