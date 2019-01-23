#include<iostream>
#include<climits>
using namespace std;
int main(){
   long long int a[10],i,j,n;
   cin>>n;
   for(i=0;i<n;i++)
        cin>>a[i];
   for(i=n-1;i>=0;i--)
        cout<<a[i]<<endl;
    return 0;
}