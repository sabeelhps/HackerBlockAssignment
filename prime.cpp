#include<iostream>
using namespace std;
int main(){
    int n,i=2,k=1;
    cin>>n;
    if(n==2)
    cout<<"prime number"<<'\n';
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"Not Prime"<<'\n';
            k=2;
            break;
        }
            
        }
            if(k==1)
             cout<<"prime"<<'\n';
    return 0;
}