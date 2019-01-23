#include<iostream>
using namespace std;

int fact(int m){
    long long int fact=1,i;
    for(i=1;i<=m;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    int t;
    t=fact(n)/(fact(r)*fact(n-r));
    return t;
}
int main(){
    long long int s,k;
        cout<<"Enter number"<<endl;
        cin>>s;
    k=fact(s);
        cout<<"factorail="<<k<<endl;
    int f,n,r;
        cout<<"Enter n and r"<<endl;
        cin>>n>>r;
    f=ncr(n,r);
    cout<<"nCr is="<<f<<endl;
    return 0;
}