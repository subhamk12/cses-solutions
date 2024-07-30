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
  vi nums(n,0);
  loop(i,0,n){nums[i]=take();}
  sort(nums.begin(),nums.end());
  int64_t sm1=0;int64_t sm2=0;
  if(n&1){sm1=nums[n/2];sm2=sm1;}else{
    sm1=nums[n/2-1];sm2=nums[n/2];
  }
  int64_t cst1=0;int64_t cst2=0;
  loop(i,0,n){cst1+=abs(sm1-nums[i]);cst2+=abs(sm2-nums[i]);}
  cout<<min(cst1,cst2)<<endl;
  return 0;
}
