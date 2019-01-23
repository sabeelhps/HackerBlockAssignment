#include<iostream>
using namespace std;

bool isArraySorted(long long int *a,long long int n){
    if(n==1){
        return true;
    }
    if(*(a)<=*(a+1)&&isArraySorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){
    long long int a[10000],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(isArraySorted(a,n)){
        cout<<"YES"<<endl;
    }    
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}