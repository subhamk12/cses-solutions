#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;

void operations(int64_t n, int64_t from,int64_t mid, int64_t to){
  if(n==1){
    cout<<from<<" "<<to<<endl;
  }else{
    operations(n-1, from, to, mid);
    cout<<from<<" "<<to<<endl;
    operations(n-1, mid, from, to);
  }
}
int64_t getans(int64_t n){
  if(n==1){return 1;}
  else{
    return getans(n-1)*2+1;
  }
}

int32_t main()
{
  int64_t n;cin>>n;
  cout<<getans(n)<<endl;
  operations(n,1,2,3);
  return 0;
}
