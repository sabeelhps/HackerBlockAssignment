#include<iostream>
using namespace std;

int main(){
    int a[100],i,n,r,b[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        r=a[i];
        b[r]=i;
    }
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true";
    cout<<endl;
        

     
    return 0;
}