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
 
int64_t getcombs(int64_t n){
  if(n==1 || n==0){return 0;}
  else{
    return n*(n-1)/2;
  }
}
 
int32_t main()
{
  int64_t n;cin>>n;
  vi num(n,0);vi psum(n+1,0);
  loop(i,0,n) num[i]=take();
  loop(i,1,n+1) psum[i]=psum[i-1]+num[i-1];
  int64_t ans=0;
  map<int64_t,int64_t> mp;
  int64_t i=0;
  while(i<n+1){
    if(psum[i]<0){
      int64_t q=psum[i]/n;
      psum[i]=psum[i]-(q-1)*n;
    }
    mp[psum[i]%n]++;
    i++;
  }
  for(auto it: mp){
    ans+=getcombs(it.second);
  }
  cout<<ans<<endl;
  return 0;
}
