#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using p=pair<int,int>;

void solve(vector<ll>&nums,ll a,ll b) {
  ll time=b;

  for(int i=0;i<nums.size();i++){
     time += min(a-1,nums[i]);
  }
  cout<<time<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      ll a,b,n;
      cin>>a>>b>>n;
      vector<ll>nums(n);
      for(int i=0;i<n;i++)cin>>nums[i];
      sort(nums.begin(),nums.end());
      solve(nums,a,b);
    }
}