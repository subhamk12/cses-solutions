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
  int64_t n,ans;cin>>n;
  int64_t sum=n*(n+1)/2;
  ans=0;
  if(sum%2==0){
    int64_t nd=sum/2;
    vi dp(nd+1,0);dp[0]=1;
    for(int64_t i=1;i<=n;i++){
      for(int64_t j=nd;j>=0;j--){
        if(j-i>=0){
          dp[j]+=dp[j-i];
          dp[j]%=c;
        }
      }
    }
    if(dp[nd]%2==0){
      ans=((c*2+dp[nd])/2)%c;
    }else{
      ans=((c+dp[nd])/2)%c;
    }
  }
  cout<<ans<<endl;
  return 0;
}
