#include<iostream>
using namespace std;

int main(){
    int n,a[1000],b[1000],c[1000],i=0,j=0,k=0;
    int r;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];

    i=0;
    j=0;    
    while(i<n&&j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    r=n-1;
    cout<<c[r];   
    cout<<endl;
    
return 0;
}