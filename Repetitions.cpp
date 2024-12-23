#include <bits/stdc++.h>
using namespace std;

int f(string s) {
    
      int n=s.size();
      
      if(n == 0) return 0;
      
    int cnt=1;
    int maxi=1;
    char c=s[0];
  
  for(int i=1;i<n;i++){
      
      if(c == s[i]){
        cnt++;
      }else{
        maxi =max(cnt,maxi);
        c =s[i];
        cnt=1;
      }
  }
  
   maxi =max(cnt,maxi);
  
  
  return maxi;
    
}

int main() {
    
    string s;
    cin>>s;
    
    int m=f(s);
    cout << m << endl;

    return 0;
}
