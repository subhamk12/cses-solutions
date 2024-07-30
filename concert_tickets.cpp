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
  int64_t n;int64_t m;cin>>n>>m;
  vi buyer(m,0);multiset<int64_t> tickets;
  loop(i,n) {int64_t x=take();tickets.insert(x);}
  loop(i,m) buyer[i]=take();
  vi ppaid(m,0);
  loop(i,m){
    if(tickets.empty()){ppaid[i]=-1;}else{
      auto it=tickets.upper_bound(buyer[i]);
      if(it!=tickets.begin()){
        it--;
        ppaid[i]=*it;
        tickets.erase(it);
      }else{
        ppaid[i]=-1;
      }
    }
  }
  loop(i,m) cout<<ppaid[i]<<endl;
  return 0;
}
