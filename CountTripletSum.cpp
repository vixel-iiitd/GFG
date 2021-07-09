#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

int solve(int arr[],int n){
  
  sort(arr,arr+n);
  // cout<<"here"<<endl;
  int count =0;
  for(int i = n-1;i>=0;i--){

    int end = i-1;
    int start = 0;

    while(end>start){

      if(arr[end]+arr[start]==arr[i]){
        count++;
        start++;
        end--;
      }

      else if(arr[start]>arr[i]-arr[end]){
        end--;
      }
      else{
        start++;
      }

    }


  }


  return count;


  
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




