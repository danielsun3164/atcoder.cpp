#include <bits/stdc++.h>
using namespace std;

const static double H = 12.0;
const static double M = 60.0;

int main() {
	int a, b, h, m;
	cin >> a >> b >> h >> m;
	double h_degree = (h * M + m) / H / M * M_PI * 2.0, m_degree = m / M * M_PI * 2.0;
	double ax = a * sin(h_degree), ay = a * cos(h_degree), bx = b * sin(m_degree),
		   by = b * cos(m_degree);
	cout << fixed << setprecision(20) << hypot(ax - bx, ay - by) << endl;
	return 0;
}
