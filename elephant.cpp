#include<iostream>
using namespace std;

int nstairs(int n){
    int i,j;
    if(i==0||j==0)
        return 1;
    if(i<0||j<0)
        return 0;
}

int main(){
    int n;
    cin>>n;
    int k=nstairs(n);
    cout<<k<<endl;
    return 0;
}