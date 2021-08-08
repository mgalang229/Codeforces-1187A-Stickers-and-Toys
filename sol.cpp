#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, s, t;
		cin >> n >> s >> t;
		// min ('s', 't') = maximum number of eggs which both have a sticker and a toy
		// and if we subtract this number from 'n' (total number of eggs available), we 
		// will get the number of eggs that ONLY contains either a sticker or a toy.
		// lastly, we need to add 1 to this result in order to make sure that we include
		// the egg (1) which both have a sticker and a toy (worst-case)
		cout << n - min(s, t) + 1 << '\n';
	}
	return 0;
}

