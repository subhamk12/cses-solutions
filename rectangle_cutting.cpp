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
 
int64_t c=1e9+7;
 
int32_t main()
{
  int64_t m, n;cin>>m>>n;
  vector<vi> dp(m,vi(n,0));
  loop(i,0,n){dp[0][i]=i;}
  loop(i,0,m){dp[i][0]=i;}
  loop(i,1,m){
    loop(j,1,n){
      if(i==j){dp[i][j]=0;}
      else{
        int64_t x=0;int64_t y=j-1;
        dp[i][j]=dp[i][0]+dp[i][j-1]+1;
        while(x<=y){dp[i][j]=min(dp[i][j],dp[i][x]+dp[i][y]+1);x++;y--;}
        x=0;y=i-1;
        while(x<=y){dp[i][j]=min(dp[i][j],dp[x][j]+dp[y][j]+1);x++;y--;}
      }
    }
  }
  std::cout<<dp[m-1][n-1]<<endl;
  return 0;
}
