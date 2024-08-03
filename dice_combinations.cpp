#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
#define int long long
 
using namespace std;
 
int basec(int n){
  if(n==1){return 1;}
  if(n==2){return 2;}
  if(n==3){return 4;}
  if(n==4){return 8;}
  if(n==5){return 16;}
  else{return 32;}
}
 
 
int mod = 1e9+7;
int32_t main()
{
  int n;cin>>n;
  int dp[n+1];
  for(int i=0;i<n+1;i++){dp[i]=0;}
  if(n<=6){cout<<basec(n);}
  else{
    dp[0]=0;
    for(int i=1;i<=6;i++){dp[i]=basec(i);} 
    for(int i=7;i<=n;i++){
      for(int j=1;j<=6;j++){
        dp[i]+=dp[i-j]%mod;
      }
    }
    cout<<dp[n]%mod;
  }
