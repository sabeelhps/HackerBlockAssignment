#include<iostream>
using namespace std;

bool isArraySorted(long long int *p,long long int n){
    if(n==1){
        return true;
    }
    if(*(p)<*(p+1)&&isArraySorted(p+1,n-1)){
        return true;
    }
    return false;
}
int main(){
    long long int a[10000],n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(isArraySorted(a,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    } 
    cout<<endl;
return 0;
}