#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int optimalLIS(vector<int> &a) {
	int n = a.size();
	vector<int> dp(n + 1, INF);
	dp[0] = -INF;

	for (int i = 0; i < n; i++) {
		int l = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
		if (dp[l - 1] < a[i] && a[i] < dp[l])
			dp[l] = a[i];
	}

	int ans = 0;

	for (int l = 0; l <= n; l++)
		if (dp[l] < INF)
			ans = l;
	return ans;

}
int LIS(vector<int> &a) {
	// O(N^2)
	int n = a.size();
	vector<int> dp(n, 1);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	return *max_element(dp.begin(), dp.end());
}
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto &x : a)
		cin >> x;
	cout << optimalLIS(a);
	return 0;
}