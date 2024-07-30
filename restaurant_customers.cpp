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
  vi arrive(n,0);vi depart(n,0);
  loop(i,n){arrive[i]=take();depart[i]=take();}
  sort(arrive.begin(),arrive.end());sort(depart.begin(),depart.end());
  int64_t i=0;int64_t j=0;int64_t busiest=0;int64_t curr=0;
  while(i<n){
    if(j<n){
      if(arrive[i]<depart[j]){curr++;i++;}
      else{busiest=max(busiest, curr);curr--;j++;}
    }
    else{busiest=max(curr, busiest);curr++;i++;}
  }
  busiest=max(busiest, curr);
  cout<<busiest<<endl;
  return 0;
}
