#include <iostream>
using namespace std;
#define ll long long 
int main() {
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>y>>x;
        ll ans=0;
        ll k=max(x,y);
        if(k%2==0){
            if(k==y) ans= k*k - x +1;
            else ans=(k-1)*(k-1) + y ;
        }else{
             if(k==x) ans=k*k - y +1;
            else ans=(k-1)*(k-1) + x ;
        }cout<<ans<<endl;
    }

    return 0;
}