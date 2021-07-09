#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

int solve(int array[],int n){

    int s =0 ;
        
    for(int i =0 ; i<n-1;i++){
      s+=array[i];
    }
        
    long long int expected = (n*(n+1))/2;
        
    return expected - s;

}

int main(){
  int n;
  cin>>n;

  int a[n];

  for(int i =0 ;i<n-1;i++){
    cin>>a[i];
  } 


  int ans = solve(a,n);


  cout<<ans<<endl;
}




