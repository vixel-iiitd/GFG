#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'

int solve(int a[],int n){
 int z = 0;
    int o = 0;
    int t= 0;
    
    for(int i =0 ;i<n;i++){
        if(a[i]==0) z++;
        else if(a[i]==1) o++;
        else t++;
    }
    
    int i =0 ;
    
    for(i;i<z;i++){
        a[i] = 0;
    }
    
    for(i;i<z+o;i++){
        a[i]= 1;
    }
    
    for(i;i<z+o+t;i++){
        a[i]=2;
    }


}

int main(){
  int n;
  cin>>n;

  int a[n];

  for(int i =0 ;i<n;i++){
    cin>>a[i];
  } 


  solve(a,n);

  for(int i =0 ;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
}




