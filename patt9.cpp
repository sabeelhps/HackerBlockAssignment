#include<iostream>
using namespace std;
int main(){
    int n,i=1,j=1,k;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        k=i;
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