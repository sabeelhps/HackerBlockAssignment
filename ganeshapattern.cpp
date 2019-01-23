#include<iostream>
using namespace std;
int main(){
    int i,j,rows,n;
    cin>>rows;
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if((i==1&&(j>=n&&j<=rows))||((i==rows&&(j>=1&&j<=n))||i==n)||((j==1&&(i>=1&&i<=n))||((j==rows&&(i>=n&&i<=rows))||j==n)))
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<endl;
    }
    return 0;
}