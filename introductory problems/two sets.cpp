#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ll n;
    cin>>n;
    ll sum=(n*(n+1))/2;
    ll target=0;
    if(sum%2==0){
        cout<<"YES"<<endl;
        target=sum/2;
        sum=0;
       vector<ll> vec(n);
       for(ll i=1;i<=n;i++){
           vec[i-1]=i;
       }
       ll count=0;
       ll count2=0;
       set<ll> st;
       set<ll> st2;
       for(ll i=n;i>=1;i--){
           if(sum+i <=target){
               sum+=i;
               st.insert(i);
               count++;
           }
       }
       for(ll i=0;i<vec.size();i++){
           if(st.find(vec[i])==st.end()){
               st2.insert(vec[i]);
               count2++;
           }
       }cout<<count<<endl;
       for(auto &p:st){
           cout<<p<<" ";
       }cout<<endl;
       cout<<count2<<endl;
       for(auto &p:st2){
           cout<<p<<" ";
       }
    }else {
        cout<<"NO";
    }
    
    return 0;
}