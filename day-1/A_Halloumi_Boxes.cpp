#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      int n,k;
      vector<int>h;
      cin>>n>>k;
      for(int i=0;i<n;i++){
        int p;
        cin>>p;
        h.push_back(p);
      }
      if(k>=2){
       cout<<"YES"<<"\n";
      }
      else{
        vector<int>d=h;
        sort(d.begin(),d.end());
        if(d==h){
          cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
      }
    }
    return 0;
}