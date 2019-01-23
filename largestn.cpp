#include<iostream>
using namespace std;
int main(){
    int n,larg,i,a[1000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    larg=a[0];
    for(i=0;i<n;i++){
        if(a[i]>=larg)
        larg=a[i];
    }
    cout<<"largest="<<larg<<endl;

    return 0;
}