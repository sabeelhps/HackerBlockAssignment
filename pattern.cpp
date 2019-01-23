#include<iostream>
using namespace std;
int main(){
    int n,i=1,j=1,k=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i){
            cout<<k<<"  ";
            k++;
            }
            else
            cout<<" ";

        }
        cout<<'\n';

    }


    return 0;
}