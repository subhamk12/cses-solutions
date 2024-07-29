#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;

int32_t main()
{
  int64_t t;cin>>t;while(t--){
    int64_t a;int64_t b;cin>>a>>b;
    bool flag=false;
    if((a+b)%3==0 && (max(a,b)-min(a,b)<=min(a,b))){flag=true;}
    cout<<(flag?"YES":"NO")<<endl;
  }
  return 0;
}
