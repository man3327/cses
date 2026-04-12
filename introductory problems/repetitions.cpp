
#include <iostream>
using namespace std;
#define ll long long
int main() {
    string s;
    cin>>s;
    char c=s[0];
    int count=0;
    int maxcount=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            count++;
        }else{
            maxcount=max(count,maxcount);
            c=s[i];
            count=1;
        }
    }maxcount=max(count,maxcount);
    cout<<maxcount;

    return 0;
}