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
  vii nums(n,make_pair(0,0));
  loop(i,0,n){nums[i].first=take(); nums[i].second=i;}
  sort(nums.begin(),nums.end());
  int64_t cnt=1;
  loop(i,0,n-1){
    if(nums[i].second>nums[i+1].second){
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
