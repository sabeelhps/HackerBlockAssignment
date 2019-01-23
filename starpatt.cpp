#include<iostream>
using namespace std;
int main(){
    int rows,n,i,j,k=0;
    cin>>rows;
    if(rows%2==0)
    return 0;
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        i<=n?k++:k--;
        for(j=1;j<=rows;j++){
            if(j>=n+1-k&&j<=n-1+k){
                cout<<"*"<<'\t';
            }
            else
             cout<<'\t';
}
        cout<<'\n';
    }

    return 0;
}