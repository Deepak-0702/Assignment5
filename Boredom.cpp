#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long maxVal = *max_element(a.begin(), a.end());
    vector<long long> sum(maxVal + 1, 0);

    for (int i = 0; i < n; i++)
        sum[a[i]] += a[i];

    vector<long long> dp(maxVal + 1, 0);
    dp[0] = 0;
    dp[1] = sum[1];

    for (int i = 2; i <= maxVal; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + sum[i]);
    }

    cout << dp[maxVal] << endl;
    return 0;
}
