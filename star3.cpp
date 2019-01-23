#include<iostream>
using namespace std;
int main(){
    int i,j,rows,n;
    cin>>rows;
    n=2*rows-1;
    for(i=1;i<=rows;i++){
        for(j=1;j<=n;j++){
            if(j>=i&&j<=n+1-i)
                cout<<"*"<<" ";
            else
                cout<<" "<<" ";    
        }
        cout<<'\n';
    }



    return 0;
}