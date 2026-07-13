#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using p=pair<int,int>;

string solve(string &s,int k) {
  unordered_map<char,int>mp;
  for(auto c:s){
    mp[c]++;
  }
  int count=0;
  for(auto lol:mp){
    if(lol.second%2)count++;
  }
  return (count <= k + 1 ? "YES" : "NO");
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      string s;
      int k,n;
      cin>>n>>k;
      for(int i=0;i<n;i++){
        char c;
        cin>>c;
        s+=c;
      }
      cout<<solve(s,k)<<"\n";
    }
}