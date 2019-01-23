#include<iostream>
using namespace std;

int power(int n,int m){
    if(m==1){
        return n;
    }
    int ans=n*power(n,m-1);
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;;
    return 0;
}