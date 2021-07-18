

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

string s;
int ans;

int main() {
	cin >> s;
	int len = s.length();
	int x = abs(s[0] - 'a');
	if (x > 13) {
		ans += (26 - x);
	}
	else {
		ans += x;
	}
	for (int i = 1;i < len;++i) {
		x = abs(s[i] - s[i - 1]);
		if (x > 13) {
			ans += (26 - x);
		}
		else {
			ans += x;
		}
	}
	cout << ans << endl;
	return 0;
}
