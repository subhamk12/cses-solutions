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
  int64_t x;int64_t n;x=take();n=take();
  set<int64_t> lights;lights.insert(0);lights.insert(x);
  multiset<int64_t> intervs;intervs.insert(x);

  loop(i,0,n){
    int64_t l=take();
    auto it= lights.upper_bound(l);
    int64_t l2=*it;it--;int64_t l1=*it;
    
    lights.insert(l);

    intervs.erase(intervs.find(l2-l1));
    intervs.insert(l2-l);intervs.insert(l-l1);

    auto ansit=intervs.end();ansit--;
    cout<<*ansit<<endl;
  }
  return 0;
}
