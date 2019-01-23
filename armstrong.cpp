#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n;
    int r,k,s=0;
    cin>>n;
    k=n;
    while(n!=0){
        r=n%10;
        s=s+pow(r,3);
        n=n/10;

    } 
    if(s==k)
    cout<<"true"<<'\n';
    else
    cout<<"false"<<'\n';


    return 0;
}