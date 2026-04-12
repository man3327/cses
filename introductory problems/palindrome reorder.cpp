#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MOD = 1e9 + 7;
int main() {
    
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }string mid;
    int count=0;
    string ans="";
    for(auto &p: mpp) if((p.second)%2!=0) count++;
    if(count>1) cout<<"NO SOLUTION";
    else{
        for(auto &p: mpp){
            if((p.second)%2!=0){
                for(int j=0;j<p.second;j++) mid+=p.first;
            }
            else {
                for(int j=0;j<p.second/2;j++) {cout<<p.first; ans+=p.first;}
            }
        }cout<<mid;
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i];
    }
    
    return 0;
}