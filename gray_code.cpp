#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define vii vector<pair<int,int>>
using namespace std;

int fastpower(int base, int exp){
  int result=1;
  while(exp>0){
    if(exp&1){result=result*base;exp--;}
    else{
      exp>>=1;
      base=base*base;
    }
  }
  return result;
}

int32_t main()
{
  int n;cin>>n;
  vector<string> answer;
  string onecode=string(n,'0');
  answer.push_back(onecode);
  for(int i=1;i<fastpower(2,n);i++){
    int cnt=0;int j=i;
    while(!(j&1)){j>>=1;cnt++;}
    onecode[cnt]=(onecode[cnt]=='1'? '0': '1');
    answer.push_back(onecode);
  }
  for(string word:answer){
    cout<<word<<endl;
  }
  return 0;
}
