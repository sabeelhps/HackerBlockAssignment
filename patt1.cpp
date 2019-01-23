#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n;
    cout<<"Enter the values of n"<<'\n';
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=n+1-i)
               cout<<"*";
            else
                cout<<" ";   
            
        }
        cout<<'\n';
        }

    return 0;
}