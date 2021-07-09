#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

int solve(int a[],int n){
int pref[n];
        
if(n==1){
  return 1;
}
        
        
pref[0] = a[0];
        
for(int i =1;i<n;i++){
  pref[i] = pref[i-1] + a[i];
}
        
for(int i =1;i<n;i++){
            
  if(pref[i-1] == pref[n-1] - pref[i]){
    return i+1;
  }            
}


return -1;


}

int main(){
  int n;
  cin>>n;

  int a[n];

  for(int i =0 ;i<n;i++){
    cin>>a[i];
  } 

  int ans =  solve(a,n);

  cout<<ans<<endl;
  
}




