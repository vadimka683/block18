#include<iostream>
#include<vector>

using namespace std;

void swap_vec(vector<int>& ap, int* ab) {
	for (int i = 0; i < ap.size(); i++) {
		int temp = ap[i];
		ap[i] = *(ab + i);
		*(ab + i) = temp;
	}
	return;
}

int main() {
	vector<int> a = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	swap_vec(a, b);
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " " << *(b + i) << "\n";
	}
}