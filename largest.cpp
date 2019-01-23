#include<iostream>
using namespace std;
int main(){
    int a[5],i,larg;
    for(i=0;i<5;i++)
        cin>>a[i];
    
    larg=a[0];
    for(i=0;i<5;i++){
        if(larg<a[i])
        larg=a[i];
    }    
    cout<<larg;



    return 0;
}

