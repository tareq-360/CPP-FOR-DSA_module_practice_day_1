#include<iostream>
using namespace std;
void sum(long long int x , long long int y){
    long long int Sum=x+y;
    cout<<x<<" + "<<y <<" = "<<Sum<<endl;
    long long int multi=x*y;
    cout<<x<<" * "<<y <<" = "<<multi<<endl;
    long long int sub=x-y;
    cout<<x<<" - "<<y <<" = "<<sub;
}
int main(){
    long long int a,b;
    cin>>a>>b;
    sum(a,b);

}