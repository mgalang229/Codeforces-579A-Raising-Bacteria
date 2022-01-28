#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x;
	cin >> x;
	int ans = 0;
	// simply count the number of set bits (1-bits) of x
	for (int bit = 31; bit >= 0; bit--) {
		ans += ((bool) (x & (1 << bit)));
	}
	cout << ans << '\n';
	return 0;
}
