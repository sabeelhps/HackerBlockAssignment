#include<iostream>
using namespace std;
int main(){
    int n,i,j,k=1,l=-1;
    cin>>n;
        for(i=n;i>=1;i--){
            k=1;
            for(j=1;j<=i;j++){
                cout<<k<<" ";
                k++;    
            }
            for(j=1;j<=l;j++){
                cout<<"* ";
                k++;    
            }
            l+=2;
            cout<<'\n';
        }

    return 0;
}