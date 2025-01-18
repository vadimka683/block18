#include<iostream>
using namespace std;

void counter(long long& ap, int& ans) {
	if (ap == 0) {
		return;
	}
	if (ap % 10 % 2 == 0) {
		ans++;
	}
	ap /= 10;
	return counter(ap, ans);
}

int main() {
	long long a = 9223372036854775806;
	int ans = 0;
	//cout << "Input long long number: ";
	//cin >> a;
	counter(a, ans);
	cout << ans;
}