#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

vector<int> solve(int a[],int n){
  int mx[n];
  mx[n-1] = a[n-1];
  for(int i =n -2;i>=0;i--){
    mx[i]=max(mx[i+1],a[i]);
  }
        
  vector<int> v;
        
  for(int i =0 ;i<n;i++){
            
    if(mx[i]==a[i]){
      v.push_back(a[i]);
    }
            
  }
  return v;
        
}

int main(){
  int n;
  cin>>n;

  int a[n];

  for(int i =0 ;i<n;i++){
    cin>>a[i];
  } 

  vector<int> v =  solve(a,n);

  for(int i =0 ;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}




