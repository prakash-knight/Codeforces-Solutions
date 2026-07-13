#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <cstring>
#include <climits>
using namespace std;

using ll = long long;

ll solve(ll x, vector<ll>& a) {
    ll ans = a[0];                

    for (int i = 1; i < a.size(); i++) {
        ans = max(ans, a[i] - a[i - 1]);
    }

    ans = max(ans, 2 * (x - a.back()));   

    return ans;
}

int main() {
    ll test;
    ll n;
    ll x;
    cin>>test;
    for(int i=0;i<test;i++){
      cin>>n>>x;
      vector<ll> a;
      for(int i=0;i<n;i++){
        ll p;
        cin>>p;
        a.push_back(p);
      }
      cout<<solve(x,a) << '\n';
    }
    return 0;
}