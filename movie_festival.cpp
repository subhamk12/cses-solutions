#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
#define loop(i, n) for (int64_t i=0;i<n;i++)
using namespace std;

int64_t take(){
  int64_t x;cin>>x;return x;
}

int32_t main()
{
  int64_t n=take();
  vii movies(n,make_pair(0,0));
  loop(i,n){movies[i].second=take();movies[i].first=take();}
  sort(movies.begin(),movies.end());
  int64_t i=0;int64_t cnt=0;int end=0;
  while(i<n){
    if(movies[i].second>=end){
      cnt++;end=movies[i].first;
    }
    i++;
  }
  cout<<cnt<<endl;
  return 0;
}
