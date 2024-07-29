#include <bits/stdc++.h>
#define vi vector<int64_t>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int64_t,int64_t>>
using namespace std;

int32_t main()
{
  string s;cin>>s;
  vi cnts(26,0);
  for(char c: s){
    cnts[c-'A']++;
  }
  int64_t odcnt=0;bool ans=true;
  for(int cnt:cnts){
    odcnt+=(cnt&1);
  }
  if(odcnt<=1){
    string mid="";string pali="";
    for(int64_t i=0;i<26;i++){
      if(cnts[i]&1){
        mid+=string(cnts[i],'A'+i);
      }else{
        pali+=string(cnts[i]/2,'A'+i);
      }
    }
    string finans=pali+mid+string(pali.rbegin(),pali.rend());
    cout<<finans<<endl;
  }else{
    cout<<"NO SOLUTION"<<endl;
  }
  return 0;
}
