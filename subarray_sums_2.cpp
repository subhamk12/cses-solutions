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
 
int32_t main()
{
  int64_t n;int64_t x;cin>>n>>x;
  vi num(n,0);vi psum(n+1,0);
  loop(i,0,n) num[i]=take();
  loop(i,1,n+1) psum[i]=psum[i-1]+num[i-1];
  int64_t ans=0;
  map<int64_t,int64_t> mp;mp[0]=1;
  int64_t i=1;
  while(i<n+1){
    ans+=mp[psum[i]-x];
    mp[psum[i]]++;
    i++;
  }
  cout<<ans<<endl;
  return 0;
}
