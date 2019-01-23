#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n,k=0;
    /*cout<<"Enter the value of n"<<'\n';
    cin>>n;*/
    for(i=1;i<=5;i++){
        i<=n?k++:k--;
        for(j=1;j<=5;j++){
            if(j>=5-k&&j<=3+k)
            cout<<"*";
            else
            cout<<" ";

        }
        cout<<'\n';
    }

    return 0;
}