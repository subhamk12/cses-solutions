#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t k;cin>>k;
  vi nums1;vi nums2;
  bool ans;
  if((k*(k+1)/2)%2==0){ans=true;}else{ans=false;}
  if(ans){
    int64_t sum=0;
    int64_t i=k;
    while(i>=1){
      if(sum+i<=k*(k+1)/4){
        sum+=i;nums1.push_back(i);
      }else{
        nums2.push_back(i);
      }
      i--;
    }
  }
  if(ans){
    cout<<"YES"<<endl;
    cout<<nums1.size()<<endl;
    for(int64_t i=0;i<nums1.size();i++){
      cout<<nums1[i]<<" ";
    }
    cout<<endl<<nums2.size()<<endl;
    for(int64_t i=0;i<nums2.size();i++){
      cout<<nums2[i]<<" ";
    }
    cout<<endl;
  }else{cout<<"NO"<<endl;}
  return 0;
}
