#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n,k;
    cout<<"Enter the values of n"<<'\n';
    cin>>n;
    for(i=1;i<=n;i++){
        
        for(j=1;j<=2*n-1;j++){
            if((j<=n+1-i)||(j>=n-1+i)){
               cout<<"*";

            }
            else{
                cout<<" "; 
        
            }
        }
        cout<<'\n';
        }

    return 0;
}