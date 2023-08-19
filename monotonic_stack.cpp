#include<bits/stdc++.h>
using namespace std;

/*
	T(n) = O(1)
	S(n) = O(1)
*/
int main() {
	int n;
	cin >> n;
	vector<int> a(n);

	for (auto &x : a)
		cin >> x;
	stack<pair<int, int>> minStack;

	for (int i = 0; i < n; i++) {
		int minimum = minStack.empty() ? a[i] : min(minStack.top().second, a[i]);
		minStack.push({a[i], minimum});
	}

	cout << "The minimum element is : " << minStack.top().second;  
	return 0;
}