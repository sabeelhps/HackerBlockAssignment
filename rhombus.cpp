#include<iostream>
using namespace std;
int main(){
    int i,j,rows,n,m;
    cin>>rows;
    m=(2*rows-1);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        for(j=1;j<=m;j++){
            if(((i==1||i==rows)&&(j>=rows+1-i&&j<=m+1-i))||((i>=2&&i<=rows-1)&&(j==rows+1-i||j==m+1-i)))
                cout<<"*";
             else
                cout<<" ";    
        }
        cout<<endl;
    }
    return 0;
}