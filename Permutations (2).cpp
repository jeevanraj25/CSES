#include <bits/stdc++.h>
using namespace std;

void  f(long long n, vector<long long>& ans) {
   
    long long a =n;
      
    if(a % 2 == 1) a=a-1;   
    

       
    for(int i=1;i<=a;i++){
       
       if(i % 2 ==0){
         ans.push_back(i);
       }
    }
    a = n;
    
     for(int i=1;i<=a;i++){
       
       if(i % 2 ==1){
         ans.push_back(i);
       }
    }
    
    
    
    return;
}

int main() {
    long long n;
    cin >> n;
 
     if(n == 1){
       cout<<1;
       return 0;
     }
    
    if(n <= 3){
      cout<<"NO SOLUTION";
      return 0;
    }
    
    vector<long long> ans;

    

    f(n, ans);
    for (int i = 0; i <ans.size(); i++) { 
        cout<<ans[i]<<" ";
    }



    return 0;
}
