#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
#define loop(i, m, n) for (int i=m;i<n;i++)
using namespace std;
 
int take(){
  int x;cin>>x;return x;
}
 
 
int32_t main()
{
  int n;cin>>n;int p;cin>>p;
  vii books(n,make_pair(0,0));
 
  loop(i,0,n){books[i].first=take();}
  loop(i,0,n){books[i].second=take();}
 
  vi dp(p+1,0);
  for(int j=0;j<n;j++){
    for(int i=p;i>=0;i--){
      if(i-books[j].first>=0){
        dp[i]=max(dp[i],dp[i-books[j].first]+books[j].second);
      }
    }
  }
  cout<<dp[p]<<endl;
 
  return 0;
}
