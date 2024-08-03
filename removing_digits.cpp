#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
 
 
using namespace std;
 
int mod=1e9+7;
int c= 1e6+1;
int32_t main()
{
  int n;cin>>n;
  vi dp;
  for(int i=0;i<c;i++){
    dp.push_back(c);
  }
  for(int i=1;i<10;i++){
    dp[i]=1;
  }
  dp[10]=2;
  for(int i=11;i<c;i++){
    int j=i;
    while(j>0){
      dp[i]=min(dp[i],dp[i-j%10]);
      j=j/10;
    }
    dp[i]++;
  }
  cout<<dp[n]<<endl;
}
