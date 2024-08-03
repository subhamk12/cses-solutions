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
  int64_t n, m;string a,b;cin>>a>>b;
  m=a.size();n=b.size();
  vector<vi> dp(m+1,vi(n+1,0));
  loop(i,0,n+1){dp[0][i]=i;}
  loop(i,0,m+1){dp[i][0]=i;}
  loop(i,1,m+1){
    loop(j,1,n+1){
      if(a[i-1]==b[j-1]){dp[i][j]=dp[i-1][j-1];}
      else{
          dp[i][j]=1+getmin(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]);
      }
    }
  }
  cout<<dp[m][n]<<endl;
  return 0;
               }
