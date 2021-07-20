#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int testcase, n, a, b, answer;
	string s;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		answer=0;
		cin >> n >> a >> b >> s;
		if (b >= 0) {
			answer = n * (a+b);
		}
		else {
			int total = 0;
			for (int i = 1; i < n; i++)
				if (s[i] != s[i - 1]) total++;
			total++;
			answer += ((total / 2) + 1) * b + (a * n);
		}
		cout << answer << '\n';
	}
	return 0;
}