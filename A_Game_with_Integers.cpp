#include <bits/stdc++.h>
using namespace std;


void solve(int n) {
 if(n%3==0) cout<<"Second\n";
 else cout<<"First\n";
 return;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      int n;
      cin>>n;
        solve(n);
    }
}