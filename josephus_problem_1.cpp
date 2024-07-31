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
  set<int64_t> kids;
  loop(i,0,n) kids.insert(i+1);
  auto it=kids.begin();
 
  while(!kids.empty() && kids.size()>1){
 
    if(it==kids.end()){it=kids.begin();}
 
    else{
      auto j=it;j++;
      if(j==kids.end()){j=kids.begin();}
      cout<<*j<<" ";
      kids.erase(j);
      it++;
    }
  }
  cout<<*kids.begin()<<endl;
  return 0;
}
