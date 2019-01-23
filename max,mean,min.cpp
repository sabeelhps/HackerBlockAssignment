#include<iostream>
using namespace std;
int main(){
    int k=0,min,max,a[10],n,i=0,j=0,sum=0;
    cout<<"enter the size\n";
    cin>>n;
    cout<<"enter the elements\n";
    while(i<n){
        cin>>a[i];
        i=i+1;
    }
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    cout<<'\n';
    while(j<n){
        sum=sum+a[j];
        j=j+1;
    }
    cout<<"sum is"<<" ";
    cout<<sum<<'\n';

    min=a[0];
    for(j=0;j<n;j++){
        if(a[0]>=a[j])
            min=a[j];
    }
    cout<<"minimum number is"<<" ";
    cout<<min<<'\n';
    
    max=a[0];
    for(j=0;j<n;j++){
        if(a[0]<=a[j])
            max=a[j];
    }
    cout<<"maximum number is";
    cout<<max;
    cout<<'\n';
    
return 0;
}