#include <bits/stdc++.h>
#define int long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
 
 
using namespace std;
 
int basec(int n){
    if(n<=4){
      return n;
    }else if(n<=6){
      return n+1-5;
    }else if(n==7){
      return 1;
    }else{
      return 0;
    }
}
 
int c=1e7;
int32_t main()
{
 
  int n;int x;cin>>n>>x;
  int coins[n];
  for(int i=0;i<n;i++){
    int x;cin>>x;coins[i]=x;
  }
  sort(coins,coins+n);
  int dp[x+1];
  for(int i=0;i<=x;i++){
    dp[i]=c;
  }
  dp[0]=0;
  for(int i=0;i<=x;i++){
    int j=0;
    while(i-coins[j]>=0 && j<n){
      if(dp[i-coins[j]]+1<dp[i]){dp[i]=dp[i-coins[j]]+1;}
      j++;
    }
  }
  if(dp[x]==c){cout<<-1<<endl;}
  else{cout<<dp[x]<<endl;}
 
}
