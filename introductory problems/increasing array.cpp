
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n;
    cin>>n;
    vector<ll> vec(n);
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }for(int i=1;i<n;i++){
        if(vec[i]<vec[i-1]) {
            count+=(vec[i-1]-vec[i]);
            vec[i]+=(vec[i-1]-vec[i]);
        }
    }cout<<count;

    return 0;
}