#include<iostream>
using namespace std;

int multiply(int a,int b){
    int ans=0;
    if(b==0)
        return 0;
    ans=ans+(a+multiply(a,b-1));
    return ans;    
}

int main(){
    int n,m;
    cin>>n>>m;
    int k=multiply(n,m);
    cout<<k<<endl;
    
return 0;
}