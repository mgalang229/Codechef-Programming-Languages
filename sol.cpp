#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, a1, b1, a2, b2;
		cin >> a >> b >> a1 >> b1 >> a2 >> b2;
		// simply follow the instructions in the problem statement
		if ((a == a1 && b == b1) || (a == b1 && b == a1)) {
			cout << 1;
		} else if ((a == a2 && b == b2) || (a == b2 && b == a2)) {
			cout << 2;
		} else {
			cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
