#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t t;cin>>t;
  while(t--){
    int64_t x;int64_t y;cin>>x>>y;
    int64_t n=max(x,y);int64_t ans=n*n-(n-1);
    if(n&1){ans+=y-x;}
    else{ans+=x-y;}
    cout<<ans<<endl;
  }
  return 0;
}
