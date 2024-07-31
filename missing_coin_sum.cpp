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
  int64_t mx=0;
  int64_t i=0;
  while(i<n){
    if(nums[i]>mx && nums[i]!=mx+1){
      cout<<mx+1<<endl;break;
    }else{
      mx=mx+nums[i];
      i++;
    }
  }
  if(i==n){
    cout<<mx+1<<endl;
  }
  return 0;
}
