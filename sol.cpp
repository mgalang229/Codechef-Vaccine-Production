#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int vaccine = 0;
	int cnt = 0;
	for (int i = 1; vaccine < p; i++) {
		if (i >= d1) {
			vaccine += v1;
		}
		if (i >= d2) {
			vaccine += v2;
		}
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
