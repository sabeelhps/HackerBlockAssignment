#include<iostream>
using namespace std;
int main(){
    long long int n,a[1000000];
    int i=0,r,count=0;
    cin>>n;
    if(n==0)
    return 0;
    while(1){
        r=n%8;
        a[i]=r;
        i++;
        n=n/8;
        count++;
        if(n==0)
            break;

    }
    for(i=count-1;i>=0;i--)
        cout<<a[i];
        cout<<endl;

    return 0;
}