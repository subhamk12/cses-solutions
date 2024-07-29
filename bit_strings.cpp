#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;

int64_t c=1e9+7;
int64_t fastpower(int64_t base, int64_t exp, int64_t c){
  base%=c;int64_t result=1;
  while(exp>0){
    if(exp&1){result=(result*base)%c;exp--;}else{
      exp>>=1;
      base=(base*base)%c;
    }
  }
  return result%c;
}

int32_t main()
{
  int64_t k;cin>>k;
  cout<<fastpower(2,k,c)<<endl;
  return 0;
}
