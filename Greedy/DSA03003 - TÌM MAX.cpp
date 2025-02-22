#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;

void solve(){
    int n; cin>>n;
    int a[100001];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += (a[i] * i)%mod;
        sum %= mod;
    }
    cout<<sum;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
