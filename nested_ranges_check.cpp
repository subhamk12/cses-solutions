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
  vector<pair<int,pair<int,int>>> times(n,make_pair(0,make_pair(0,0)));
  loop(i,0,n){
    times[i].first=take();times[i].second.first=-1*take();times[i].second.second=i;
  }
  sort(times.begin(),times.end());
  vii contains(n,make_pair(0,0)); int endsfirst=-1*times[n-1].second.first+1;
  for(int64_t i=n-1;i>=0;i--){
    if(-1*times[i].second.first>=endsfirst){
      contains[times[i].second.second].first=1;
    }else{
      endsfirst=-1*times[i].second.first;
    }
  }
  int endslast=-1*times[0].second.first-1;
  for(int64_t i=0;i<n;i++){
    if(-1*times[i].second.first<=endslast){
      contains[times[i].second.second].second=1;
    }else{
      endslast=-1*times[i].second.first;
    }
  }
  loop(i,0,n){cout<<contains[i].first<<" ";}cout<<endl;
  loop(i,0,n){cout<<contains[i].second<<" ";}cout<<endl;
  return 0;
}
