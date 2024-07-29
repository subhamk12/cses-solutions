#include <bits/stdc++.h>
#define loop(i, n) for (int64_t i = 0; i < n; i++)
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;


int32_t main()
{
  int64_t n;cin>>n;
  while(n>1){
    cout<<n<<" ";
    if(n&1){n=n*3+1;}else{n=n>>1;}
  }
  cout<<n<<endl;
}
