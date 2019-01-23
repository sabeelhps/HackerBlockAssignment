#include<iostream>
using namespace std;

int nstairs(int n){

    if(n==0)
        return 0;
    if(n<0)
        return 0;

    int ans=nstairs(n-1)+nstairs(n-2)+nstairs(n-3);
    
    return ans;        
}

int main(){
    int n;
    cin>>n;
    int k=nstairs(n);
    cout<<k<<endl;
    return 0;
}