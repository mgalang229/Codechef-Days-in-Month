#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int w;
		cin >> w;
		string s;
		cin >> s;
		vector<string> v = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
		map<string, int> mp;
		int tmp = 0;
		for (auto x : v) {
			mp[x] = tmp++;
		}
		int count[7], id = mp[s];
		memset(count, 0, sizeof(count));
		for (int i = 1; i <= w; i++) {
			count[id]++;
			id++;
			if (id == 7) {
				id = 0;
			}
		}
		for (int i = 0; i < 7; i++) {
			cout << count[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
