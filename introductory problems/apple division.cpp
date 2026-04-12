// 10
// 603 324 573 493 659 521 654 70 718 257
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
 int n;
 cin>>n;
 vector<ll> nums(n);
 ll total=0;
 ll sum=0;
 for(int i=0;i<n;i++){
     int val;
     cin>>val;
     total+=val;
     nums[i]=val;
 }ll ans=LLONG_MAX;
 for(int i=0;i<(1<<n);i++){
     sum=0;
     for(int j=0;j<n;j++){
         if(i&(1<<j)){
             sum+=nums[j];
         }
     }ll diff=abs(total-(sum*2));
     if(ans>diff) ans=diff;
 }cout<<ans;

    return 0;
}