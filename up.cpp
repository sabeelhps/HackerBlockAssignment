#include<iostream>
using namespace std;
int main(){
    char k;
    cin>>k;
    if(k>='A'&&k<='Z')
        cout<<"UPPERCASE"<<'\n';
    else if(k>='a'&&k<='z')
        cout<<"lowercase"<<'\n';
    else
        cout<<"Invalid"<<'\n';    


    return 0;
}