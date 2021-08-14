#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	scanf("%d", &n);

	vector <int> in(n);
	vector <int> is(n);

	for(auto &p: in)
		scanf("%d", &p);

	for(int i = 0; i < n; ++i)
		for(int j = i + 1; j < n; ++j)
			is[in[j] - in[i]] = true;

	int ans = 0;
	for(auto &v: is)
		ans += v;
	printf("%d\n", ans);
}

int main() {
	int cases;
	scanf("%d", &cases);

	while(cases--)
		solve();
	return 0;
}
