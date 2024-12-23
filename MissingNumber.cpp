#include <bits/stdc++.h>
using namespace std;

long long missing(long long n, vector<long long>& ans) {
    long long expected_sum = 0;
    long long actual_sum = 0;

    
    expected_sum = n * (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        actual_sum += ans[i];
    }

    return expected_sum - actual_sum; 
}

int main() {
    long long n;
    cin >> n;

    // Create a vector with size `n + 1` (1-based indexing)
    vector<long long> ans(n + 1);

    for (int i = 1; i <= n - 1; i++) { // Only input `n - 1` numbers (one is missing)
        cin >> ans[i];
    }

    long long m = missing(n, ans);

    cout << m << endl;

    return 0;
}
