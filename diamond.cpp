#include<iostream>
using namespace std;
int main(){
    int i,j,m=0,k=1,rows,n;
    cin>>rows;
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        i<=n?m++:m--;
        k=1;
        for(j=1;j<=rows;j++){
            if(j>=n+1-m&&j<=n-1+m){

                cout<<k%10;
                j<n?k++:k--;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}