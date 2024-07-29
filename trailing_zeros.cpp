#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;

int32_t main()
{
  int64_t k;cin>>k;
  int64_t ans=0;
  while(k>0){
    ans+=k/5;
    k=k/5;
  }
  cout<<ans<<endl;
  return 0;
}
