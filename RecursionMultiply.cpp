#include<iostream>
using namespace std;

int multi(int a,int b){
    if(b==1){
        return a;
    }
    int ans=a+multi(a,b-1);
    return ans;
}

int main(){
    int n,m;
    
    cin>>n>>m;
    
    cout<<multi(n,m)<<endl;
    return 0;
}