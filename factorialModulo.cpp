#include<iostream>
using namespace std;

int factorial(int t){
    int fact=1;
    for(int i=1;i<=t;i++){
        fact=(fact*i)%107;
    }
    return fact%107;
}
int main(){
    int a[1000],n,i,sum=0,b[1000],k=0;
    cin>>n;
        
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){    
        b[k]=factorial(a[i]);
        k++;
    }
    for(i=0;i<n;i++){
        sum=(sum+b[i])%107;
    }
    cout<<(sum%107)<<endl;

    return 0;
}