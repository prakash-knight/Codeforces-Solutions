#include<bits/stdc++.h>
using namespace std;

using ll =long long;

int solve(string &s){
  int count=0;
  bool yes=false;
  int tcount=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='.'){
      count++;
      if(count==3)
        return 2;
    }
    else{
      tcount+=count;
      count=0;
    }
  }
  tcount+=count;
  return tcount;
}
int main()
{
  int t;
  cin>>t;

  while(t--){
    int size;
    cin>>size;
    string s;
    for(int i=0;i<size;i++){
      char c;
      cin>>c;
      s+=c;
    }
    cout<<solve(s)<<"\n";
  }
  return 0;
}
