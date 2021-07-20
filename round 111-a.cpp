#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int testcase, s;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		int count = 2;
		cin >> s;
		if (s == 1) { count--; goto r; }
		while (1) {
			if (s > pow(count-1, 2) && s <= pow(count, 2))
				break;
			count++;
		}
		r:
		cout << count << '\n';
	}
	return 0;
}