#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n,i,j,r=0,sum=0,k=1;
    cin>>n;
    while(n!=0){
        r=n%10;
        n=n/10;
        sum=sum+(k*pow(10,r-1));
        k++;
    }
    cout<<sum<<endl;

    return 0;
}