#include<iostream>
using namespace std;

int rabbit_option(const int& np, int kp = 3) {
	int count = 0;
	if (np == 0) {
		return 1;
	}
	else if (np < 1) {
		return 0;
	}
	int options = 0;
	for (int jump = 1; jump <= kp; ++jump) {
		options += rabbit_option(np - jump, kp);
	}

	return options;
}

int main() {
	int n, k;
	cout << "Input the number of steps and the maximum jump of the rabbit ";
	cin >> n >> k;
	cout << rabbit_option(n, k);
}