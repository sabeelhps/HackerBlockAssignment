#include<iostream>
using namespace std;

int main(){
    int a[100],i,j,n,min;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
            min=j;
        }
        swap(a[min],a[i]);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
return 0;
}