#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
int main() {
    
    ll n;
    cin>>n;
    while(n--){
        ll n1,n2;
        cin>>n1>>n2;
        if((n1+n2)%3==0 && max(n1,n2)<=2*min(n1,n2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}