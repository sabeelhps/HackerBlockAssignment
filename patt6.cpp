#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    char k;
    cout<<"Enter the number"<<'\n';
    cin>>n;
    for(i=1;i<=n;i++){
        k='A';
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i&&j<=n-1+i){ 
                cout<<k;

                j<n?k++:k--;
            }
            else
                cout<<" ";

        }
        cout<<'\n';
    }
    return 0;
}