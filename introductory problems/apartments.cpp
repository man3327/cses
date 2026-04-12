// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int count=0;
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    set<int> st;
    int p1=0;
    int p2=n-1;
    int j=0;
    while(p1<=p2 && j<m ){
        if(v[p1]-k > v2[j]){
            j++;
        }else if(v[p1]+k < v2[j]){
            p1++;
        }else{
            p1++;
            j++;
            count++;
        }
    }
    cout<<count;

    return 0;
}