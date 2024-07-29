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
  for(int64_t n=1;n<=k;n++){
    int64_t ans=(n*n*(n*n-1)/2-4*(n-1)*(n-2));
    cout<<ans<<endl;
  }
  return 0;
}
