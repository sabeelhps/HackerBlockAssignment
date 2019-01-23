#include<iostream>
using namespace std;



int main(){
    
    long long int a[10000],i,j,n,k=0,r;
    cin>>n;
    while(n!=0){
    r=n%10;
        if((9-r)<r)
            a[k]=9-r;
        else  
            a[k]=r;
    n=n/10;
            k++;
    }
    for(i=k-1;i>=0;i--)
        cout<<a[i];

        cout<<endl;
    
return 0;
}