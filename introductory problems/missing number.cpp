
#include <iostream>
using namespace std;
#define ll long long 
int main() {
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n-1;i++){
        int val;
        cin>>val;
        sum+=val;
    }cout<< ((n*(1+n))/2)-sum;

    return 0;
}