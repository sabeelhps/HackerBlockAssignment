#include<iostream>
using namespace std;

int main(){
    int a[100],b[100],c[100];
    int i,r,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++){
        r=a[i];
        c[r]=i;
    }  
    for(i=0;i<n;i++){
        if(b[i]!=c[i]){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;      
    return 0;
}