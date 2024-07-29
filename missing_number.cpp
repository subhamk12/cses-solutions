#include <bits/stdc++.h>
#define loop(i, n) for (int64_t i = 0; i < n; i++)
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;

int64_t take(){
  int64_t x;cin>>x;return x;
}

int32_t main()
{
  int64_t n;cin>>n;
  int64_t sum=n*(n+1)/2;
  for(int i=0;i<n-1;i++){
    sum-=take();
  }
  cout<<sum<<endl;
}
