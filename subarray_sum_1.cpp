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
  int64_t i=0;int64_t j=1;
  while(j<n+1){
    if(psum[j]-psum[i]==x){ans++;i++;j++;}
    else if(psum[j]-psum[i]>x){i++;}
    else{j++;}
  }
  cout<<ans<<endl;
  return 0;
}
