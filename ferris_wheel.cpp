#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t n;int64_t x;cin>>n>>x;
  vi child(n,0);
  for(int64_t i=0;i<n;i++){int64_t a;cin>>a;child[i]=a;}
  int64_t i=0;int64_t j=n-1;int64_t cnt=0;
  sort(child.begin(),child.end());
  while(i<=j){
    if(child[i]+child[j]<=x){i++;}j--;cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
