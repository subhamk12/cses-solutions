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
  int64_t n=take();int64_t x=take();
  vii nums(n,make_pair(0,0));
  loop(i,n) {nums[i].first=take();nums[i].second=i+1;}
  sort(nums.begin(),nums.end());
  int64_t i=0;int64_t j=n-1;

  while(i<j){
    if(nums[i].first+nums[j].first>x){j--;}
    else if(nums[i].first+nums[j].first<x){i++;}
    else{
      cout<<nums[i].second<<" "<<nums[j].second<<endl;
      return 0;
    }
  }
  cout<<"IMPOSSIBLE"<<endl;
  return 0;
}
