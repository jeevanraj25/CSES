#include <bits/stdc++.h>
using namespace std;

long long f(long long n,long long arr[]) {
    
     long long cnt=0;
     
     for(int i=1;i<n;i++){
       
        if(arr[i] > arr[i-1]) continue;
        
        cnt += abs(arr[i] -arr[i-1]);
        arr[i]=arr[i-1];
     }

    return cnt; 
}

int main() {
    long long n;
    cin >> n;
    
    long long arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    
    long long m = f(n,arr);

    cout << m << endl;

    return 0;
}
