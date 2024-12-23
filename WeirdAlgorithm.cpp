#include <bits/stdc++.h>
using namespace std;
 
void f(long long n, vector<long long>& ans) {
    while (n != 1) {
        ans.push_back(n);
        if (n & 1) {  
            n = (n * 3) + 1;
        } else {     
            n /= 2;
        }
    }
    ans.push_back(1);
}
 
int main() {
    long long n;
    cin >> n;
 
    vector<long long> ans;
 
    f(n, ans);
 
    for (int i = 0; i < ans.size(); i++) { 
        cout << ans[i] << " ";
    }
 
    cout << endl;
 
    return 0;
}
