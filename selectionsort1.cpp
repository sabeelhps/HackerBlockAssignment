#include<iostream>
using namespace std;
int main(){
    int n,a[100],i,j,min;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++){
        min=a[i];
        for(j=0;j<n-1;j++){
            if(min>a[j])
                swap(min,a[j]);
        }
    } 
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;   

    return 0;
}