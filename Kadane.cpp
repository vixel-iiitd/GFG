#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

int solve(int arr[],int n){

  int sum =INT_MIN ;
  int x =0;
  bool b = false;

  for(int i=0 ;i<n;i++)
  {

    if(x+arr[i]<x){
      sum = max(sum,x);
    }

    if((x+arr[i])<0){
      sum = max(sum,x);
      x=0;
    }

    else{
      b=true;
      x=x+arr[i];
    }

  }

  sum = max(sum,x);

  if(!b){
    sort(arr,arr+n);
    sum = arr[n-1];
  }

  return sum;


  
}

int main(){
  int n;
  cin>>n;

  int a[n];

  for(int i =0 ;i<n;i++){
    cin>>a[i];
  } 


  int ans = solve(a,n);


  cout<<ans<<endl;
}




