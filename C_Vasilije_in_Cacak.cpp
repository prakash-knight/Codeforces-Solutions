#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using p=pair<int,int>;

void solve(ll n ,ll k,ll x) {
  ll s=n-k;
  ll mini=(k*(k+1))/2;
  ll maxi=(n*(n+1)/2)-(s*(s+1)/2);
  if(x>=mini && x<=maxi){
    cout<<"YES\n";
  }
  else cout<<"NO\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      ll n,k,x;
      cin>>n>>k>>x;
        solve(n,k,x);
    }
    return 0;
}