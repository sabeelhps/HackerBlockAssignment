#include<iostream>
using namespace std;
int main(){
    long long int r,n,s=0;
    cout<<"enter n"<<'\n';
    cin>>n;
    while(n!=0){
        r=n%2;
        s=s+r;
        n=n/2;
    }
    cout<<s<<'\n';

    return 0;
}