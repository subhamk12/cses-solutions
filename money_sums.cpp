#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
#define loop(i, m, n) for (int64_t i=m;i<n;i++)
using namespace std;
 
int64_t take(){
  int64_t x;cin>>x;return x;
}
 
int64_t getmin(int64_t x, int64_t y, int64_t z){
  if(x>y){
    if(y>z){return z;}
    else{return y;}
  }else{
    if(z>x){return x;}
    else{return z;}
  }
}
 
int64_t c=1e5+1;
 
int32_t main()
{
  int64_t n;cin>>n;
  vi coins(n,0);
  loop(i,0,n){coins[i]=take();}
  vector<bool> dp(c,false);dp[0]=true;
  loop(i,0,n){
    for(int64_t j=c-1;j>=0;j--){
      if(j-coins[i]>=0 && !dp[j]){
        dp[j]=dp[j-coins[i]];
      }
    }
  }
  int64_t cnt=0;
  vi sums;loop(i,1,c){if(dp[i]){cnt++;sums.push_back(i);}}
  cout<<cnt<<endl;
  for(int64_t x:sums){
    cout<<x<<" ";
  }
  return 0;
}
