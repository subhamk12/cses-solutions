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
  int64_t n;cin>>n;
  vi num(n,0);
  loop(i,0,n) num[i]=take();
  stack<pair<int64_t,int64_t>> smaller;
  vi ans(n,0);
  for(int64_t i=0;i<n;i++){
    while(!smaller.empty() && smaller.top().first>=num[i]){
      smaller.pop();
    }
    if(smaller.empty()){
      ans[i]=0;
    }else{
      ans[i]=smaller.top().second+1;
    }
    smaller.push(make_pair(num[i],i));
  }
 
  loop(i,0,n){cout<<ans[i]<<" ";}
  return 0;
}
