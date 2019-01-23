#include<iostream>
using namespace std;
int main(){
    int a[1000],i,n,minimum,j;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++){
        int minimum=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minimum])
            minimum=j;
        }
    
    swap(a[i],a[minimum]);    
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}