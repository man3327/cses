#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
int main() {
    
    ll n;
    cin>>n;
    ll res=2;
    for(ll i=1;i<n;i++){
        res=(res*2) %MOD;
    }
    cout<< res;
    
    return 0;
}