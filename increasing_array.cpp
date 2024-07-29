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
  int64_t ans=0;int64_t curval;cin>>curval;
  for(int64_t i=1;i<n;i++){
    int64_t x;cin>>x;
    if(x>curval){curval=x;}else{
      ans+=curval-x;
    }
  }
  cout<<ans;
  return 0;
}
