#include<iostream>
using namespace std;
int main(){
    int n,i,j,k=0,m=1,rows;
    cin>>rows;
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        m=1;
        i<=n?k++:k--;
        for(j=1;j<=n;j++){
            if(j>=n+1-k){
                cout<<m;
                m++;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}