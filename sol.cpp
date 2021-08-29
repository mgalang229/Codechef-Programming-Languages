#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	//input
	int a, b, a1, b1, a2, b2;
	cin >> a >> b >> a1 >> b1 >> a2 >> b2;a
	
	//check if a and b is one of the two pairs given
	if((a==a1&&b==b1)||(a==b1&&b==a1))
		cout << 1;
	else if((a==a2&&b==b2)||(a==b2&&b==a2))
		cout << 2;
	else
		cout << 0;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
