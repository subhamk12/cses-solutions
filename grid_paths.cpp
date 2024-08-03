#include <bits/stdc++.h>
#define loop(i, n) for (int64_t i = 0; i < n; i++)
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
 
 
using namespace std;
 
int64_t mod=1e9+7;
int64_t c= 1e6+1;
int32_t main()
{
  int64_t n;cin>>n;
  vector<string> path;
  for(int64_t i=0;i<n;i++){
    string row;
    cin>>row;
    path.push_back(row);
  }
  vector<vi> ways;
  for(int64_t i=0;i<n+1;i++){
    vector<int64_t> lin;
    for(int64_t j=0;j<n+1;j++){
      lin.push_back(0);
    }
    ways.push_back(lin);
  }
  ways[1][0]=1;
  for(int64_t i=1;i<=n;i++){
    for(int64_t j=1;j<=n;j++){
      if(path[i-1][j-1]=='.'){
        ways[i][j]=(ways[i-1][j]+ways[i][j-1])%mod;
      }
    }
  }
  cout<<ways[n][n]<<endl;
}
