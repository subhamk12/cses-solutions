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
  int64_t tot=0;vi dur(n,0);
  loop(i,0,n){
    dur[i]=take();tot+=take();
  }
  sort(dur.begin(),dur.end());
  vi psum(n,0);psum[0]=dur[0];
  loop(i,1,n){psum[i]=psum[i-1]+dur[i];}
  loop(i,0,n){tot-=psum[i];}
  cout<<tot<<endl;
  return 0;
}
