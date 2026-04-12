#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count=1;
    string temp=s;
    while(next_permutation(temp.begin(),temp.end())){
        count++;
    }
    
    cout<<count<<endl;
    cout<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }
    
}