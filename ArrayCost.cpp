#include<iostream>
using namespace std;

int main(){
    long int a[100000],i,j;
    long int n,k=1,count=0,t;
    cin>>t;
    while(k<=t){
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<j&&a[i]>a[j])
            count++;
        }
    }
    cout<<count<<endl;
    count=0;
    k++;
    }
    
   
    
    return 0;
}