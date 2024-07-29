#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t n;cin>>n;
  if(n==1){cout<<1;}
  else if(n<=3){cout<<"NO SOLUTION";}
  else{
    int64_t i=1;
    while(i<n){cout<<n-i<<" ";i+=2;}
    i=0;
    while(i<n){cout<<n-i<<" ";i+=2;}
    
  }
  return 0;
}
