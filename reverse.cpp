#include<iostream>
using namespace std;
int main(){
    int n,i,r;
    cout<<"Enter the number"<<'\n';
    cin>>n;
    for(;n!=0;){
        r=n%10;
        cout<<r;
        n=n/10;
    }
    cout<<'\n';

    return 0;
}