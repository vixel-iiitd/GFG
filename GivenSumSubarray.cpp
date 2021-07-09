#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

vector<int> solve(int arr[],int n,int s){
  int l = 0;
        
  int sum =0;
  int r =-1;
  for(int i =0 ;i<n;i++){
            
    if(s==sum){
      r=i;
      break;
    }

    if(sum+arr[i]>s){
      sum+=arr[i];
      while(sum>s){
        sum-=arr[l];
        l++;
      }
                
    }
            
    else{
      sum+=arr[i];
    }
            
  }
        
  vector<int> v1;
  
  if(s==sum){        
    v1.push_back(l+1);
  }
  if(r==-1 && s==sum){
    r=n;
  }
        
        
  v1.push_back(r);
        
  return v1;

  
}

int main(){
  int n,s;
  cin>>n>>s;

  int a[n];

  for(int i =0 ;i<n;i++){
    cin>>a[i];
  } 


  vector<int> v = solve(a,n,s);

  for(int i =0 ;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

}


//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1



