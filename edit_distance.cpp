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
 
int64_t c=1e9+7;
 
int32_t main()
{
  int64_t n, m, ans;cin>>n>>m;
  vi nums(n,0);
  loop(i,0,n){nums[i]=take();} vector<vi> dp(n,vi(m+1,0));
  if(nums[0]!=0) {dp[0][nums[0]]=1;}
  else {loop(i,1,m+1) {dp[0][i]=1;}}
 
  loop(i,1,n){
    if(nums[i]!=0){
      dp[i][nums[i]]+=dp[i-1][nums[i]-1]+dp[i-1][nums[i]];
      if(nums[i]<m){dp[i][nums[i]]+=dp[i-1][nums[i]+1];}
      dp[i][nums[i]]%=c;
    }else{
      loop(j,1,m+1){
        dp[i][j]+=dp[i-1][j-1]+dp[i-1][j];
        if(j<m){dp[i][j]+=dp[i-1][j+1];}
        dp[i][j]%=c;
      }
    }
  }
  ans=0;
  loop(i,1,m+1){
    ans+=(dp[n-1][i]%c);ans%=c;
  }
  cout<<ans<<endl;
  return 0;
}
