#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;

void solve(){
    string s; cin>>s;
    int i = s.size()-1;
    while(i>=0 && s[i] == '0'){
        s[i] = '1';
        i--;
    }
    if(i >= 0){
        s[i] = '0';
    }
    cout<<s;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
