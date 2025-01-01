#include<iostream>
using namespace std;

int rabbit_option(const int& np, int kp = 3) {
	int count = 0;
	if (kp == 1) {
		return np;
	}
	return rabbit_option(np,kp - 1)
}

int main() {
	int n, k;
	cout << "Input the number of steps and the maximum jump of the rabbit ";
	cin >> n >> k;
}