#include <bits/stdc++.h>
using namespace std;

using p = pair<int, int>;

int solve(int a,int b,pair<int,int>&k,pair<int,int>&q) {
    set<pair<int,int>> allpos;
    int count=0;

      allpos.insert({k.first-a,k.second-b});
      allpos.insert({k.first+a,k.second+b});
      allpos.insert({k.first+a,k.second-b});
      allpos.insert({k.first-a,k.second+b});
      allpos.insert({k.first-b,k.second-a});
      allpos.insert({k.first+b,k.second+a});
      allpos.insert({k.first-b,k.second+a});
      allpos.insert({k.first+b,k.second-a});
    
    int i=0,j=0;
    set<pair<int,int>> moves = {
    { a,  b},
    { a, -b},
    {-a,  b},
    {-a, -b},
    { b,  a},
    { b, -a},
    {-b,  a},
    {-b, -a}
};
    for(auto pos:allpos){
      for(auto mov:moves){
        if(pos.first+mov.first==q.first && pos.second+mov.second==q.second){
          count++;
        }
      }
    }
    return count;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        pair<int,int>k={xk,yk};
        pair<int,int>q={xq,yq};
        cout<<solve(a,b,k,q)<<"\n";
    }
}