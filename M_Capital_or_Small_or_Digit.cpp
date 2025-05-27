#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='a'){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    else if(a<'a' && a>='A'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else if(a>='0' && a<='9'){
        cout<<"IS DIGIT";
    }
    return 0;
}