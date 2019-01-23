#include<iostream>
#include<climits>
using namespace std;
int main(){
    long long int n,larg,a[100000],i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    larg=INT_MIN;
    for(i=0;i<n;i++){
        if(larg<a[i])
        larg=a[i];
    }
    cout<<larg<<endl;

    return 0;
}