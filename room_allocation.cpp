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
  vector<pair<int,pair<int,int>>> guest_times(n,make_pair(0,make_pair(0,0)));
  loop(i,0,n){
    guest_times[i].first=take();guest_times[i].second.first=take();guest_times[i].second.second=i;
  }
  sort(guest_times.begin(),guest_times.end());
  vi rooms_assigned(n,0);
  priority_queue<pair<int64_t,int64_t>> exit_index;
  exit_index.push(make_pair(-1*guest_times[0].second.first,0));
  rooms_assigned[0]=1;
  int64_t roomcnt=1;
  for(int64_t i=1;i<n;i++){
    pair<int64_t,int64_t> frstexit=exit_index.top();
    if(guest_times[i].first>-1*frstexit.first){
      rooms_assigned[i]=rooms_assigned[frstexit.second];
      exit_index.pop();
      exit_index.push(make_pair(-1*guest_times[i].second.first,i));
    }else{
      roomcnt++;
      rooms_assigned[i]=roomcnt;
      exit_index.push(make_pair(-1*guest_times[i].second.first,i));
    }    
  }
  vi finans(n,0);
  loop(i,0,n){finans[guest_times[i].second.second]=rooms_assigned[i];}
  cout<<roomcnt<<endl;
  loop(i,0,n){cout<<finans[i]<<" ";}cout<<endl;
  return 0;
}
