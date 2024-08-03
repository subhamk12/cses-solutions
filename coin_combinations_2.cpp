#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
 
 
using namespace std;
 
int mod=1e9+7;
int32_t main()
{
 
  int n;int x;cin>>n>>x;
  vi coins;
  for(int i=0;i<n;i++){
    int a;cin>>a;coins.push_back(a);
  }
  vi dp;
  for(int i=0;i<=x;i++){
    dp.push_back(0);
  }
  dp[0]=1;
  for(int i=0;i<n;i++){
    int j=0;
    while(j+coins[i]<=x){
      dp[j+coins[i]]=(dp[j]+dp[j+coins[i]])%mod;
      j++;
    }
  }
  cout<<dp[x]<<endl;
}
