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

  int64_t mxsm=nums[0];int64_t mseh=nums[0];
  loop(i,1,n){
    if(nums[i]>mseh+nums[i]){mseh=nums[i];}else{
      mseh=mseh+nums[i];
    }
    mxsm=max(mxsm,mseh);
  }
  cout<<mxsm<<endl;
  return 0;
}
