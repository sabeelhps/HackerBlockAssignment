#include<iostream>
using namespace std;

int main(){
    int a[100],i,j,n,item;
    cin>>n;
    cin>>item;
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++){
            a[n-i]=a[n-1-i];

        }
        a[0]=item;
        for(i=0;i<n+1;i++)
          cout<<a[i];

return 0;
}