// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(int n,int src,int dest,int helper){
    if(n==1){
        cout<<src<<" "<<dest<<endl;
        return;
    }
    solve(n-1,src,helper,dest);
    cout<<src<<" "<<dest<<endl;
    solve(n-1,helper,dest,src);
}
int main() {
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    solve(n,1,3,2);

    return 0;
}