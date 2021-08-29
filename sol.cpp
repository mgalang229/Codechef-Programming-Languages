#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, a1, b1, a2, b2;
	cin >> a >> b >> a1 >> b1 >> a2 >> b2;
	if(a>b)
		swap(a, b);
	if(a1>b1)
		swap(a1, b1);
	if(a2>b2)
		swap(a2, b2);
	if(a==a1&&b==b1)
		cout << 1;
	else if(a==a2&&b==b2)
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
