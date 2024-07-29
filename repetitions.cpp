#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t n;cin>>n;
  string s;cin>>s;
  int64_t ans=0;int64_t cnt=1;
  for(int64_t i=1;i<n;i++){
    if(s[i]==s[i-1]){cnt++;}else{ans=max(ans,cnt);cnt=1;}
  }
  ans=max(ans,cnt);
  cout<<ans;
  return 0;
}
