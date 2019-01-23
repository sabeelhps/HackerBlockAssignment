#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int r,n,i=0,s=0;
    cin>>n;
    while(n!=0){
        r=n%10;
        s=s+r*pow(2,i);
        n=n/10;
        i=i+1;

    }
    cout<<s<<'\n';
    return 0;
}