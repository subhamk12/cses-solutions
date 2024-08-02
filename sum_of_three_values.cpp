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
  int64_t n;int64_t x;cin>>n>>x;
  int64_t tot=0;
  vii num(n,make_pair(0,0));
  loop(i,0,n) {num[i].first=take();num[i].second=i+1;}
  sort(num.begin(),num.end());
  vi ans(3,0);
  loop(i,0,n){
    int64_t j=i+1; int64_t k=n-1;
    while(j<k){
        if(num[j].first+num[k].first+num[i].first<x){j++;}
        else if(num[j].first+num[k].first+num[i].first>x){k--;}
        else{
            ans[0]=num[i].second;
            ans[1]=num[j].second;
            ans[2]=num[k].second;
            sort(ans.begin(),ans.end());
            cout<<ans[0]<< " "<<ans[1]<<" "<<ans[2]<<endl;
            return 0;
        }
    }
  }
  cout<<"IMPOSSIBLE"<<endl;
  return 0;
}
