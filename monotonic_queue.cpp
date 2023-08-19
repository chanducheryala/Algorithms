#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);

	for(auto &x : a)
		cin >> x;

	deque<int> monotonic_queue;

	for(int i = 0; i < n; i++) {
		while(!monotonic_queue.empty() && monotonic_queue.back() > a[i])
			monotonic_queue.pop_back();
		monotonic_queue.push(a[i]);

		// removing the element from window
		// i.e is pop_front from deque;
		//  monotonic.queue.popfront(); 
	}
	
	return 0;
}