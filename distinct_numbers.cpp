#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
using namespace std;

int32_t main()
{
  int64_t n;cin>>n;
  set<int64_t> nums;
  for(int64_t i=0;i<n;i++){
    int64_t x;cin>>x;
    nums.insert(x);
  }
  int64_t cnt=0;auto it=nums.begin();
  while(it!=nums.end()){
    cnt++;it++;
  }
  cout<<cnt<<endl;
  return 0;
}
