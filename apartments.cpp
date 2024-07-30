#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t n;int64_t m;int64_t k;cin>>n>>m>>k;
  vi men(n,0);vi home(m,0);
  for(int64_t i=0;i<n;i++){int64_t x;cin>>x;men[i]=x;}
  for(int64_t i=0;i<m;i++){int64_t x;cin>>x;home[i]=x;}
  sort(men.begin(),men.end());sort(home.begin(),home.end());
  int64_t i=0;int64_t j=0;int64_t cnt=0;
  while(i<n && j<m){
    if((men[i]+k>=home[j] && men[i]<=home[j]) || (men[i]-k<=home[j] && men[i]>=home[j])){i++;j++;cnt++;}
    else{
      if(men[i]>home[j]){
        j++;
      }else{
        i++;
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}
