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
  vi songs(n,0);
  loop(i,0,n) songs[i]=take();
  int64_t i=0;int64_t j=0;
  set<int64_t> unique;int64_t mxcnt=0;
  while(j<n){
    if(unique.find(songs[j])==unique.end()){
      unique.insert(songs[j]);
      j++;
    }else{
      mxcnt=max(mxcnt, j-i);
      while(songs[i]!=songs[j]){
        unique.erase(songs[i]);
        i++;
      }
      unique.erase(songs[j]);
      i++;
    }
  }
  mxcnt=max(mxcnt,j-i);
  cout<<mxcnt<<endl;
  return 0;
}
