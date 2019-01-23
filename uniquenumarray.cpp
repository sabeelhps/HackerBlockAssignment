#include<iostream>
#include<climits>
using namespace std;
int main(){
    long long int n,a[100000],i,j,ans=0;
    cin>>n;
    for(i=0;i<n;i++){
       cin>>a[i];
    }
    for(i=0;i<n;i++){
       ans^=a[i];
    }
    cout<<ans<<endl;
    
    return 0;
}