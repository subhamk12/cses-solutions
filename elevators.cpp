#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define ff first
#define ss second
#define pll pair<long long,long long>
#define pii pair<int,int>
#define vll vector<pair<long long,long long>>
#define vii vector<pair<int, int>>
#define loop(i, m, n) for (int i = m; i < n; i++)
#define ll long long
using namespace std;


int take(){
  int x;cin>>x;return x;
}


int main() {
  //take the number of people and their weight and max weight as input
  int n;
  ll maxWeight;
  cin>>n>>maxWeight;
  vi people(n);
  loop(i,0,n){people[i]=take();}

  int limit=1<<n;

  //create the dp array which represents all particular combinations
  vll dp(limit,make_pair(0,0));
  dp[0]={1,0};
  loop(mask,1,limit){
    pll bestResult={INT_MAX,INT_MAX};
    for(int i=0;i<n;i++){

      if((mask&(1<<i))==0) continue;

      auto res=dp[mask^(1<<i)];
      if(res.second+people[i]<=maxWeight){
        res.second+=people[i];
      }else{
        res.first+=1;
        res.second=people[i];
      }
      bestResult=min(bestResult,res);
    }
    dp[mask]=bestResult;
  }
  cout<<dp[limit-1].first<<'\n';

  return 0;
}
