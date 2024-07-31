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
  int64_t n=take();
  multiset<int64_t> heights;
  int64_t i=n;int64_t cnt=0;int64_t mx=0;
  while(i>0){
    int64_t v=take();
    if(v>=mx){heights.insert(v);mx=v;cnt++;}
    else{
      auto it= heights.upper_bound(v);
      heights.erase(it);heights.insert(v);
      auto it2=heights.end();it2--;
      mx=*it2;
    }
    i--;
  }
  cout<<cnt<<endl;
  return 0;
}
