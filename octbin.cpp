#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int n,a[40];
    long long int i=0,count=0,r,j,k=0,p=0,m,s;
    cin>>s;
    if(s==0)
    return 0;
    if(s<=100000000){
    while(1){
        m=s%10;
        p+=(m*pow(8,k));
        k++;
        s=s/10;
        if(s==0)
        break;
    }
    n=p;
    while(1){
        r=n%2;
        a[i]=r;
        n=n/2;
        i+=1;
        count+=1;
        if(n==0)
        break;
        
    }
    for(j=count-1;j>=0;j--)
    cout<<a[j];
    }
    cout<<endl;
    return 0;
}