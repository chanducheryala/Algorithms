#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> a(n);

	for (auto &x : a)
		cin >> x;
	sort(a.begin(), a.end());
	int lower = lower_bound(a.begin(), a.end(), 3) - a.begin();
	cout << lower;
	return 0;
}