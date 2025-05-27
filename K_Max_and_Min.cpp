#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mx=max(a,b);
    int mn=min(a,b);
    int fmx=max(mx,c);
    int fmn=min(mn,c);
    cout<<fmn<<" "<<fmx;
    return 0;
}